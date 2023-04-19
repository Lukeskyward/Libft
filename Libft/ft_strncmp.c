/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <lucasda-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:37:54 by lucasda-          #+#    #+#             */
/*   Updated: 2023/04/19 17:44:42 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = n;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && s1[i] && s2[i] && (len - 1) > 0)
	{
		i++;
		len--;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
