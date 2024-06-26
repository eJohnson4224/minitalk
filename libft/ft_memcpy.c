/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:34:06 by ejohnson          #+#    #+#             */
/*   Updated: 2023/05/24 23:41:38 by ejohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t leng)
{
	void	*set;

	if (!dest && !src)
		return (0);
	set = dest;
	while (leng--)
		*(char *)dest++ = *(char *)src++;
	return (set);
}
