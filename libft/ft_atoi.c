/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofs <sofs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:24:30 by sofs              #+#    #+#             */
/*   Updated: 2023/04/17 21:52:31 by sofs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isSpace(char c)
{
	if (c == ' ' || c == '\t' || c == '\f'
		|| c == '\v' || c == '\n' || c == '\r')
		return (1);
	return (0);
}

int ft_atoi(const char *nptr)
{
	int	i;
	int isNeg;
	int	total;

	total = 0;
	isNeg = 1;
	i = 0;
	while (isSpace(nptr[i]))
		i++;
	if (nptr[i] == '-')
	{
		isNeg = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (ft_isdigit(nptr[i]) && nptr[i] != '\0')
	{
		total = total * 10 + nptr[i] - '0';
		i++;
	}
	return (total * isNeg);
}