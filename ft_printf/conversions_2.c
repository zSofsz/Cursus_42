/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofs <sofs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:48:26 by sofs              #+#    #+#             */
/*   Updated: 2023/05/10 17:43:42 by sofs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_u(unsigned int u)
{
	int	len;

	len = ft_putnbr_base_p(u, 10, "0123456789");
	return (len);
}

int	convert_x(unsigned int x, int is_lower)
{
	int	len;

	if (is_lower)
		len = ft_putnbr_base_p(x, 16, "0123456789abcdef");
	else
		len = ft_putnbr_base_p(x, 16, "0123456789ABCDEF");
	return (len);
}
