/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopereir <sopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:44:52 by sopereir          #+#    #+#             */
/*   Updated: 2023/04/21 16:50:03 by sopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *node;

	if (!(*lst) || !new)
		return ;
	node = *lst;
	while (!node->next)
		node = node->next;
	node->next = new;
}
