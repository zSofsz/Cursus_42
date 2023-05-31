/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofs <sofs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:19:38 by sofs              #+#    #+#             */
/*   Updated: 2023/05/31 13:47:39 by sofs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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

char	*cycle(int fd, char **str)
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
		str[fd] = ft_strjoin(str[fd], aux);
	}
	free(aux);
	return (str[fd]);
}

char	*get_next_line(int fd)
{
	static char	*str[4096];
	char		*aux;

	if (fd < 0)
		return (NULL);
	str[fd] = cycle(fd, str);
	aux = get_line(str[fd]);
	if (!aux[0])
	{
		free(aux);
		free(str[fd]);
		return (NULL);
	}
	str[fd] = get_remainder(str[fd]);
	return (aux);
}
