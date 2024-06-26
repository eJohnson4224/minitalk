/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:46:05 by ejohnson          #+#    #+#             */
/*   Updated: 2023/05/26 14:18:30 by ejohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_countword(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && (*(char *)s == c))
			s++;
		if (*s)
			count++;
		while (*s && (*(char *)s != c))
			s++;
	}
	return (count);
}

static int	ft_wordlen(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*ft_word(const char *s, char c)
{
	char	*word;
	int		word_len;
	int		i;

	i = 0;
	word_len = ft_wordlen(s, c);
	word = (char *)malloc(sizeof(char) * (word_len + 1));
	if (!word)
		return (0);
	while (i < word_len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	freestring(char **string, int i)
{
	int	a;

	a = 0;
	while (a <= i)
		free(string[i++]);
	free(string);
}

char	**ft_split(const char *s, char c)
{
	char	**strings;
	int		i;

	i = 0;
	if (!s)
		return (0);
	strings = (char **)malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (!strings)
		return (0);
	while (*s)
	{
		while (*s && (*(char *)s == c))
			s++;
		if (*s)
			strings[i++] = ft_word(s, c);
		if (i > 0 && strings[i - 1] == NULL)
		{
			freestring(strings, i - 1);
			return (0);
		}
		while (*s && !(*(char *)s == c))
			s++;
	}
	strings[i] = 0;
	return (strings);
}
