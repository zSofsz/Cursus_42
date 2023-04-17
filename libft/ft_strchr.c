/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopereir <sopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:00:47 by sopereir          #+#    #+#             */
/*   Updated: 2023/04/14 17:48:14 by sopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int	i;

	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == (char)c)
		return ((char *)s + i);
	return NULL;
}
