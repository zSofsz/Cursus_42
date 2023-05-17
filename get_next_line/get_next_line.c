/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofs <sofs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:41:16 by sofs              #+#    #+#             */
/*   Updated: 2023/05/15 13:51:47 by sofs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_line(char *s, int bytes)
{
	int		i;

	if (bytes == 0)
		return (s);
	i = 1;
	while (s[i] != '\n')
		i++;
	return (ft_substr(s, 0, i));
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*aux;
	int			bytes;

	aux = (char *)malloc(BUFFER_SIZE + 1);
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
	aux = get_line(str, bytes);
	str = ft_strchr(str, '\n');
	return (aux);
}
