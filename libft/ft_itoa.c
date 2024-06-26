/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:42:27 by ejohnson          #+#    #+#             */
/*   Updated: 2023/05/22 14:03:23 by ejohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_len(int n)
{
	size_t	len;

	len = 0;
	if (n == -2147483648)
		return (11);
	else if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_create(int n, size_t len, char *out)
{
	while (n)
	{
		out[len--] = (n % 10) + '0';
		n /= 10;
	}
	return (out);
}

char	*ft_itoa(int n)
{
	char	*out;
	size_t	len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	len = ft_len(n);
	out = ft_calloc(len + 1, (sizeof(char)));
	if (!out)
		return (0);
	if (n < 0)
	{
		n = -n;
		out[0] = '-';
	}
	out[len--] = '\0';
	out = ft_create(n, len, out);
	return (out);
}
