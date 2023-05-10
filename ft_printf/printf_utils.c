/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofs <sofs@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:03:43 by sofs              #+#    #+#             */
/*   Updated: 2023/05/10 16:46:04 by sofs             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static int	count_num(unsigned long long n)
{
	unsigned long long	i;

	i = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa_p(unsigned long long num)
{
	int		i;
	char	*str;

	i = count_num(num);
	str = (char *)malloc(i + 1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	while (i-- > 0)
	{
		str[i] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}

int	ft_putnbr_base_p(unsigned long long n, unsigned long long b, char *base)
{
	static int	i;

	i = 0;
	if (n < b)
	{
		write(1, &base[n], 1);
		i++;
	}
	else
	{
		ft_putnbr_base_p(n / b, b, base);
		n = n % b;
		write(1, &base[n], 1);
		i++;
	}
	return (i);
}
