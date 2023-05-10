/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofs <sofs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:33:21 by sopereir          #+#    #+#             */
/*   Updated: 2023/05/10 17:38:00 by sofs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

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

static void	loop(long int n, int b, char *base)
{
	if (n < b)
		write(1, &base[n], 1);
	else
	{
		loop(n / b, b, base);
		n = n % b;
		write(1, &base[n], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	n;
	int			i;

	if (!is_base_valid(base))
		return ;
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	i = 0;
	while (base[i] != '\0')
		i++;
	loop(n, i, base);
}
