/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:45:48 by ejohnson          #+#    #+#             */
/*   Updated: 2023/05/05 18:34:30 by ejohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'));
}
/*#include <stdio.h>
int	main(int ac, char **av)
{
	char	user_input;
	user_input = *av[1];
	printf("user_input to ft_isalpha: %d", ft_isalpha(user_input));
	return (0);
}*/
