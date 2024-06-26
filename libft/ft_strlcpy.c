/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:19:06 by ejohnson          #+#    #+#             */
/*   Updated: 2023/05/10 13:42:13 by ejohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	i;

	i = 0;
	while (*src && i + 1 < dest_size)
	{
		++i;
		*dest++ = *src++;
	}
	if (i < dest_size)
		*dest = '\0';
	while (*src++)
		++i;
	return (i);
}
