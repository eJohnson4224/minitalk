/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:42:57 by ejohnson          #+#    #+#             */
/*   Updated: 2023/05/24 23:42:21 by ejohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	avail;

	i = 0;
	while (*dest && i < dest_size)
	{
		++dest;
		++i;
	}
	avail = ft_strlcpy(dest, src, dest_size - i);
	return (avail + i);
}
