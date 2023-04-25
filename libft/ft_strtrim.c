/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofs <sofs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:35:18 by sofs              #+#    #+#             */
/*   Updated: 2023/04/25 17:41:56 by sofs             ###   ########.fr       */
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

static int	count_len(const char *s, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (is_setchr(s[i], set))
		i++;
	if (i < ft_strlen(s))
	{
		j = ft_strlen(s) - 1;
		while (is_setchr(s[j], set))
		{
			j--;
			i++;
		}
	}
	return (ft_strlen(s) - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	len = count_len(s1, set);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (is_setchr(s1[i], set))
		i++;
	ft_strlcpy(str, (char *)(s1 + i), len + 1);
	if (len == 0)
		return (str);
	j = ft_strlen(str) - 1;
	while (is_setchr(str[j], set))
	{
		str[j] = '\0';
		j--;
	}
	return (str);
}
