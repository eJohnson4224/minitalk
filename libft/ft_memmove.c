/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:12:45 by ejohnson          #+#    #+#             */
/*   Updated: 2023/05/23 17:42:55 by ejohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t leng)
{
	void	*set;

	if (!dest && !src)
		return (0);
	set = dest;
	if (src < dest)
	{
		src += leng;
		dest += leng;
		while (leng--)
			*(char *)--dest = *(char *)--src;
	}
	else
		while (leng--)
			*(char *)dest++ = *(char *)src++;
	return (set);
}
