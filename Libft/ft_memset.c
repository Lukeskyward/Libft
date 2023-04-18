/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:38:32 by lucasda-          #+#    #+#             */
/*   Updated: 2023/04/18 16:06:40 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pstr;

	i = 0;
	pstr = (unsigned char *)s;
	while (i < n)
	{
		pstr[i] = c;
		i++;
	}
	return (pstr);
}
