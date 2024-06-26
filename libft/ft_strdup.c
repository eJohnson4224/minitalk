/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:23:37 by ejohnson          #+#    #+#             */
/*   Updated: 2023/05/24 23:17:38 by ejohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	void	*address;
	size_t	s_len;

	s_len = ft_strlen(s);
	address = ft_calloc(s_len + 1, sizeof(char));
	if (!address)
		return (0);
	ft_memcpy(address, (const void *) s, s_len);
	return ((char *)address);
}
