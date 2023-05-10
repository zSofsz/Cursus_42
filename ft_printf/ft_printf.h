/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofs <sofs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 08:57:13 by sopereir          #+#    #+#             */
/*   Updated: 2023/05/10 17:47:02 by sofs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *s, ...);

//CONVERSIONS
int		convert_d_i(int num);
int		convert_c(char c);
int		convert_s(char *s);
int		convert_p(unsigned long long p);
int		convert_u(unsigned int u);
int		convert_x(unsigned int x, int is_lower);

//UTILS
char	*ft_itoa_p(unsigned long long n);
int		ft_putnbr_base_p(unsigned long long n,
			unsigned long long b, char *base);

#endif