/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <lucasda-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:55:53 by lucasda-          #+#    #+#             */
/*   Updated: 2023/04/28 10:02:29 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char separator)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == separator)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != separator)
			i++;
	}
	return (count);
}

size_t	size_specific_word(char *s, char separator)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != separator)
		i += 1;
	return (i);
}

char	*words(char *s, char separator)
{
	size_t	i;
	size_t	len;
	char	*word;

	len = size_specific_word(s, separator);
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i += 1;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	j;

	if (!s)
		return (NULL);
	res = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	j = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			res[j] = words((char *)s, c);
			j += 1;
		}
		while (*s && *s != c)
			s++;
	}
	res[j] = 0;
	return (res);
}
