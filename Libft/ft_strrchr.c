/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <lucasda-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:03:57 by lucasda-          #+#    #+#             */
/*   Updated: 2023/04/19 17:12:40 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	j;

	j = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + j);
	while (j >= 0)
	{
		if (s[j] == c)
			return ((char *)s + j);
		j--;
	}
	return (NULL);
}
