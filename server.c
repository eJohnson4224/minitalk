#include <signal.h>
#include <unistd.h>
#include "libft/libft.h"

static void	sig_action(int sig, siginfo_t *info, void *context)
{
	static int				i = 0;
	static pid_t			client_pid = 0;
	static unsigned char	x = 0;

	(void)context;
	if (!client_pid)
		client_pid = info->si_pid;
	x |= (sig == SIGUSR2);
	if (++i == 8)
	{
		i = 0;
		if (!x)
		{
			kill(client_pid, SIGUSR2);
			client_pid = 0;
			return ;
		}
		ft_putchar_fd(x, 1);
		x = 0;
		kill(client_pid, SIGUSR1);
	}
	else
		x <<= 1;
}

int	main(void)
{
	struct sigaction	s_sigaction;

	ft_putstr_fd("Server PID: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
	s_sigaction.sa_sigaction = sig_action;
	s_sigaction.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &s_sigaction, 0);
	sigaction(SIGUSR2, &s_sigaction, 0);
	while (1)
		pause();
	return (0);
}
