/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <lucasda-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:16:48 by lucasda-          #+#    #+#             */
/*   Updated: 2023/05/02 15:20:32 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*next_node;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		next_node = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = next_node;
	}
	*lst = NULL;
}
