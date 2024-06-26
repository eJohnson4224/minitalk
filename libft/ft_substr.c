/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:04:29 by ejohnson          #+#    #+#             */
/*   Updated: 2023/05/24 23:15:29 by ejohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sub_size;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub_size = len + 1;
	sub = ft_calloc(sub_size, sizeof(char));
	if (!sub)
		return (0);
	ft_memcpy((void *)sub, (const void *)s + start, len);
	sub[sub_size - 1] = '\0';
	return ((char *)sub);
}
