/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofs <sofs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:05:52 by sopereir          #+#    #+#             */
/*   Updated: 2023/05/10 17:36:59 by sofs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\n')
		return (1);
	return (0);
}

static int	is_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
		i++;
	if (i <= 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	base_number(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

static long int	convert_to_int(char *str, char *base)
{
	int			i;
	int			b;
	int			base_len;
	long int	total;

	total = 0;
	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	i = 0;
	while (base_number(str[i], base) != -1)
	{
		b = base_number(str[i], base);
		total = total * base_len + b;
		i++;
	}
	return (total);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	minus;
	int	total;

	if (!is_base_valid(base))
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		while (is_space(str[i]))
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			minus++;
			i++;
		}
		break ;
	}
	total = convert_to_int(str + i, base);
	if (minus % 2)
		total = -total;
	return (total);
}
