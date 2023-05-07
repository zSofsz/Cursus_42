/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 08:57:13 by sopereir          #+#    #+#             */
/*   Updated: 2023/05/07 21:19:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include "../libft/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int		ft_printf(const char *s, ...);

//CHECKS
int		is_conversion(char c);
int		is_flag(char c);
void	check_conversion(char c, va_list *args);

//CONVERSIONS
void	convert_d(int num);

#endif