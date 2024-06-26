/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:36:44 by ejohnson          #+#    #+#             */
/*   Updated: 2023/05/08 14:22:13 by ejohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *a, int c, size_t leng)
{
	void	*set;

	set = a;
	while (leng--)
		*(char *) a++ = (unsigned char) c;
	return (set);
}
