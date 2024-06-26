/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:48:45 by ejohnson          #+#    #+#             */
/*   Updated: 2023/05/05 18:35:49 by ejohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*#include <stdio.h>
int	main(int ac, char **av)
{
	char	user_input;
	user_input = *av[1];
	printf("user_input to ft_isdigit: %d", ft_isdigit(user_input));
	return (0);
}*/
