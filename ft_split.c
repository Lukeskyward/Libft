/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <lucasda-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:55:53 by lucasda-          #+#    #+#             */
/*   Updated: 2023/04/27 17:36:11 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	unsigned int	words;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	words = 0;
	while (s[j] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
		}
		if (s[i] != c)
		{
			while (s[i] != c)
				i++;
			words++;
		}
		j++;
	}
	return (words);
}

/*static int	**word_size(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	sizes_index;
	int				**sizes_set[count_words(s, c)];

	i = 0;
	sizes_index = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i] != c)
				j++;
			sizes_set[sizes_index] = j;
			sizes_index++;
		}
		i++;
	}
	return (sizes_set);
}*/

static int modded_strlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i ++;
	return (i);
}

static char populate_res(char const *s, char c)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = modded_strlen(s, c);
	word = malloc(sizeof(modded_strlen(s, c)) + 1);
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	printf("word: %s", word);
	return ((char)word);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		i;
	int		words;
	char	**splitted_words;

	i = 0;
	words = count_words(s, c);
	if (!s)
		return (NULL);
	splitted_words = malloc(count_words(s, c) + 1 * sizeof(char *));
	if (!splitted_words)
		return (NULL);
	while (i < words)
	{
		
	}
}

int	main(void) 
{
	char	*str = "This is a string."; 
	char	**newstr; 
	int		i; 

	newstr = ft_split(str, ' '); 
	i = 0; 
	while (newstr[i]) 
		printf("New: %s\n", newstr[i++]); 
	return (0); 
}