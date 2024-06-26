/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 23:26:25 by ejohnson          #+#    #+#             */
/*   Updated: 2023/05/05 16:18:54 by ejohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*#include <stdio.h>
int	main(int ac, char **av)
{
	char	user_input;
	user_input = *av[1];
	printf("user_input to ft_isalnum: %d\n", ft_isalnum(user_input));
	return (0);
}*/
