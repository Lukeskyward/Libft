/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <lucasda-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:07:00 by lucasda-          #+#    #+#             */
/*   Updated: 2023/04/28 12:58:42 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_checkchr(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*ns;

	if (!s1 || !set)
		return (NULL);
	while (s1)
	{
		if (ft_checkchr(*s1, set) == 1)
			s1++;
		else
			break ;
	}
	len = ft_strlen(s1);
	while (len != 0)
	{
		if (ft_checkchr(s1[len - 1], set) == 1)
			len--;
		else
			break ;
	}
	ns = malloc((len + 1) * (sizeof(char)));
	if (!ns)
		return (NULL);
	ft_strlcpy(ns, s1, len + 1);
	return (ns);
}
