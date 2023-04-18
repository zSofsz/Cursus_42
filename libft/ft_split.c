/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofs <sofs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 21:45:31 by sofs              #+#    #+#             */
/*   Updated: 2023/04/18 23:56:18 by sofs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (str[i] == c)
		i++;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		words++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	if (str[i - 1] == c && words != 0)
		words--;
	return (words);
}

static int	count_len(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	return (i);
}

static void	more_lines(const char *s, char c, char **str, int words)
{
	int		len;
	int		k;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != '\0' && words != 0)
	{
		while (s[i] == c)
				i++;
		len = count_len((char *)(s + i), c);
		str[j] = (char *)malloc(len + 1);
		k = 0;
		while (s[i] != c && s[i] != '\0')
		{
			str[j][k++] = s[i];
			i++;
		}
		str[j++][k] = '\0';
		words--;
	}
	str[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		words;

	words = count_words(s, c);
	str = (char **)malloc(sizeof(char *) * (words + 1));
	more_lines(s, c, str, words);
	return (str);
}
