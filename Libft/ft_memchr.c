/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <lucasda-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:48:47 by lucasda-          #+#    #+#             */
/*   Updated: 2023/04/19 17:55:14 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*conv_str;
	size_t			i;

	conv_str = (unsigned char *)s;
	i = 0;
	while (n-- > 0)
	{
		if (conv_str[i] == (unsigned char)c)
			return (conv_str + i);
		i++;
	}
	return (NULL);
}
