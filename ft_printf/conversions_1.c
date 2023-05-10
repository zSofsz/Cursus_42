/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofs <sofs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:59:17 by sofs              #+#    #+#             */
/*   Updated: 2023/05/10 16:46:39 by sofs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_d_i(int num)
{
	char	*n;
	int		len;

	n = ft_itoa(num);
	len = ft_strlen(n);
	ft_putstr_fd(n, 1);
	free(n);
	return (len);
}

int	convert_c(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	convert_s(char *s)
{
	int	len;

	if (!s)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	len = ft_strlen(s);
	ft_putstr_fd(s, 1);
	return (len);
}

int	convert_p(unsigned long long p)
{
	int		len;

	if (!p)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	ft_putstr_fd("0x", 1);
	len = ft_putnbr_base_p(p, 16, "0123456789abcdef");
	return (len + 2);
}
