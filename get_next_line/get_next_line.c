/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofs <sofs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:41:16 by sofs              #+#    #+#             */
/*   Updated: 2023/05/18 23:02:27 by sofs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*get_line(char *s)
{
	int		i;
	i = 0;
	while (s[i] != '\n' && s[i] != '\0')
		i++;
	return (ft_substr(s, 0, ++i));
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*aux;
	int			bytes;

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
	if (!str)
		return (NULL);
	aux = get_line(str);
	str = ft_strchr(str, '\n');
	return (aux);
}
//----------------------------------
//NAO RETORNA NULL NO ULTIMO GNL