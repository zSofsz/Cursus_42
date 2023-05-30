/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofs <sofs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:41:16 by sofs              #+#    #+#             */
/*   Updated: 2023/05/30 23:05:05 by sofs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*get_line(char *s)
{
	int		i;
	char	*str;

	i = 0;
	if (!s)
	{
		str = (char *)malloc(1);
		str[0] = '\0';
		return (str);
	}
	while (s[i] != '\n' && s[i] != '\0')
		i++;
	return (ft_substr(s, 0, ++i));
}

static char	*get_remainder(char *s)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] != '\n' && s[i] != '\0')
		i++;
	str = ft_substr(s, ++i, ft_strlen(s));
	free(s);
	return (str);
}

char	*cycle(int fd, char *str)
{
	int			bytes;
	char		*aux;

	aux = (char *)malloc(BUFFER_SIZE + 1);
	aux[0] = '\0';
	while (!ft_strchr(aux, '\n'))
	{
		bytes = read(fd, aux, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(aux);
			return (NULL);
		}
		else if (bytes == 0)
			break ;
		aux[bytes] = '\0';
		str = ft_strjoin(str, aux);
	}
	free(aux);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*aux;

	str = cycle(fd, str);
	aux = get_line(str);
	if (!aux[0])
	{
		free(aux);
		free(str);
		return (NULL);
	}
	str = get_remainder(str);
	return (aux);
}
