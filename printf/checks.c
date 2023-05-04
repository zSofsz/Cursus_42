/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.**s                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofs <sofs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:35:22 by sopereir          #+#    #+#             */
/*   Updated: 2023/05/04 11:46:14 by sofs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	is_conversion(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd'
		|| c == 'i' || c == 'u' || c == 'x' || c == 'X'
		|| c == '%')
		return (1);
	return (0);
}

int	is_flag(char c)
{
	if (c == '+' || c == ' ' || c == '#')
		return (1);
	return (0);
}

char	*get_string(char **s)
{
	int		i;
	char	*str;

	i = 0;
	while (!is_conversion((*s)[i]) && (*s)[i] != '\0')
		i++;
	if (is_conversion((*s)[i]))
		i++;
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	str = ft_substr(*s, 0, i);
	*s += i;
	return (str);
}

void	check_conversion(char **s, va_list *args)
{
	int	i;

	i = 0;
	while (!is_conversion((*s)[i]))
		i++;
	if ((*s)[i] == 'c')
		return ;
	// else if ((*s)[i] == 's')
	// else if ((*s)[i] == 'p')
	else if ((*s)[i] == 'd')
		convert_d(va_arg(*args, int), get_string(s));
	// else if ((*s)[i] == 'i')
	// else if ((*s)[i] == 'u')
	// else if ((*s)[i] == 'x')
	// else if ((*s)[i] == 'X')
	// else if ((*s)[i] == '%')
}

void	check_flags(char c)
{
	if (c == '+')
		flags.flag_plus = 1;
	else if (c == ' ')
		flags.flag_space = 1;
	else if (c == '#')
		flags.flag_sharp = 1;
}
