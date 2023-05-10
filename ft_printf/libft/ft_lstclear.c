/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofs <sofs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:59:18 by sopereir          #+#    #+#             */
/*   Updated: 2023/04/25 18:04:52 by sofs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = node;
	}
}
