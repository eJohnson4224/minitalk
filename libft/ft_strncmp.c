/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:52:18 by ejohnson          #+#    #+#             */
/*   Updated: 2023/05/11 18:03:43 by ejohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 1;
	if (n == 0)
		return (0);
	while (i < n && (*s1 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
		i++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}
