/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofs <sofs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:42:02 by sopereir          #+#    #+#             */
/*   Updated: 2023/04/18 15:49:50 by sofs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		str[100];
	const char	*s;
	char		*d;

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = str[i];
		i++;
	}
	return (dest);
}
