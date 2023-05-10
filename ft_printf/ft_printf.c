/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofs <sofs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 08:55:57 by sopereir          #+#    #+#             */
/*   Updated: 2023/05/10 17:47:36 by sofs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_conversion(char c, va_list args)
{
	if (c == 'c')
		return (convert_c(va_arg(args, int)));
	else if (c == 's')
		return (convert_s(va_arg(args, char *)));
	else if (c == 'p')
		return (convert_p(va_arg(args, unsigned long long)));
	else if (c == 'd')
		return (convert_d_i(va_arg(args, int)));
	else if (c == 'i')
		return (convert_d_i(va_arg(args, int)));
	else if (c == 'u')
		return (convert_u(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (convert_x(va_arg(args, unsigned int), 1));
	else if (c == 'X')
		return (convert_x(va_arg(args, unsigned int), 0));
	else if (c == '%')
		return (convert_c('%'));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		res;

	va_start(args, s);
	i = 0;
	res = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			res += check_conversion(s[i], args);
			i++;
		}
		else
		{
			write (1, &s[i], 1);
			i++;
			res++;
		}
	}
	va_end(args);
	return (res);
}
