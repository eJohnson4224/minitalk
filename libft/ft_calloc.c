/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:04:02 by ejohnson          #+#    #+#             */
/*   Updated: 2023/05/22 12:46:46 by ejohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	totl_alloc;
	void	*address;	

	totl_alloc = nmemb * size;
	address = malloc(totl_alloc);
	if (!address)
		return (0);
	else
		ft_bzero(address, totl_alloc);
	return (address);
}
