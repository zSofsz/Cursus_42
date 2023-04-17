/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopereir <sopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:33:19 by sopereir          #+#    #+#             */
/*   Updated: 2023/04/14 12:53:25 by sopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;

	j = 0;
	dest_len = ft_strlen(dst);
	if (size <= dest_len)
		return (size + ft_strlen(src));
	i = dest_len;
	while (src[j] != '\0' && j < size - dest_len - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i]='\0';
	return (dest_len + ft_strlen(src));
}