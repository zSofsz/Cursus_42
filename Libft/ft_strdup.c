/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofs <sofs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:59:32 by sofs              #+#    #+#             */
/*   Updated: 2023/04/17 16:05:42 by sofs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	int	len;
	char *str;

	len = ft_strlen(s);
	str = (char *)malloc(len);
	if (str == NULL)
		return NULL ;
	ft_strlcpy(str, s, len + 1);
	return (str);
}