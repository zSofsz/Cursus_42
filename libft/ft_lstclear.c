/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopereir <sopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:59:18 by sopereir          #+#    #+#             */
/*   Updated: 2023/04/21 17:05:52 by sopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *node;

	if (!lst || !del)
		return ;
	while (!(*lst)->next)
	{
		node = *lst;
		ft_lstdelone(node, del);
		*lst = node->next;
	}
	*lst = NULL;
}
