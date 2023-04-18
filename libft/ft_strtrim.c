/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofs <sofs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:35:18 by sofs              #+#    #+#             */
/*   Updated: 2023/04/18 19:17:39 by sofs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_setchr(char c, const char *set)
{
	int	len;
	int	i;

	len = ft_strlen(set);
	i = 0;
	while (i < len)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	len = ft_strlen(s1);
	str = (char *)malloc(len + 1);
	i = 0;
	while (is_setchr(s1[i], set))
		i++;
	ft_strlcpy(str, (char *)(s1 + i), len + 1);
	j = ft_strlen(str) - 1;
	while (is_setchr(str[j], set))
	{
		str[j] = '\0';
		j--;
	}
	return (str);
}
