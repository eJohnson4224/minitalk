/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:11:27 by ejohnson          #+#    #+#             */
/*   Updated: 2023/05/24 23:39:43 by ejohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	x;

	if (!*little)
		return ((char *)big);
	if (!*big)
		return (0);
	i = 0;
	while (big[i] && i < n)
	{
		x = 0;
		while ((unsigned char) big[i + x] == (unsigned char) little[x]
			&& big[i + x] && i + x < n)
		{
			if (!little[x + 1])
				return ((char *)big + i);
			x++;
		}
		i++;
	}
	return (0);
}
