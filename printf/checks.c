/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopereir <sopereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:35:22 by sopereir          #+#    #+#             */
/*   Updated: 2023/04/28 15:58:04 by sopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft/libft.h"

char	*get_string(char *s)
{
	int		i;
	char	*str;

	i = 0;
	if (s[0] == ' ' && s[i] != '%')
		i++;
	while (s[i] != '\0' && s[i] != ' ' && s[i] != '%')
		i++;
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	str = ft_substr(s, 0, i);
	return (str);
}

int	check_flags(char *s)
{
	
}
