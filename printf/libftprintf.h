/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofs <sofs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 08:57:13 by sopereir          #+#    #+#             */
/*   Updated: 2023/05/04 14:00:56 by sofs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include "../libft/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

typedef struct s_flags
{
	int	flag_plus;
	int	flag_sharp;
	int	flag_space;
}	t_flags;

t_flags flags;

int		ft_printf(const char *s, ...);

//CHECKS
int		is_conversion(char c);
int		is_flag(char c);
char	*get_string(char **s);
void	check_flags(char c);
void	check_conversion(char **s, va_list *args);

//CONVERSIONS
void	convert_d(int num, char *s);

#endif