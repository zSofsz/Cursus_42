/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopereir <sopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:33:25 by sopereir          #+#    #+#             */
/*   Updated: 2023/04/21 09:05:07 by sopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	str[100];
	char	*d;

	if (!dest || !src || n <= 0)
		return (NULL);
	ft_memmove(str, src, n);
	d = dest;
	i = 0;
	while (i < n)
	{
		d[i] = str[i];
		i++;
	}
	return (dest);
}
