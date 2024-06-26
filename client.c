#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft/libft.h"

static void	sig_action(int sig)
{
	static int	received = 0;

	if (sig == SIGUSR1)
		++received;
	else
	{
		ft_putnbr_fd(received, 1);
		ft_putchar_fd('\n', 1);
		exit(0);
	}
}

static void	bit_send(int pid, char *str)
{
	int		i;
	char	x;

	while (*str)
	{
		i = 8;
		x = *str++;
		while (i--)
		{
			if (x >> i & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(100);
		}
	}
	i = 8;
	while (i--)
	{
		kill(pid, SIGUSR1);
		usleep(100);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3 || !ft_strlen(argv[2]))
		return (1);
	ft_putstr_fd("Sent    : ", 1);
	ft_putnbr_fd(ft_strlen(argv[2]), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Received: ", 1);
	signal(SIGUSR1, sig_action);
	signal(SIGUSR2, sig_action);
	bit_send(ft_atoi(argv[1]), argv[2]);
	while (1)
		pause();
	return (0);
}
