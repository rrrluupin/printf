/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u_int_dec.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlupin <rlupin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:11:56 by rlupin            #+#    #+#             */
/*   Updated: 2022/01/10 16:12:04 by rlupin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	u_dec_putchar(unsigned int n)
{
	char	c;

	if (n < 10)
		c = n % 10 + '0';
	else if (n >= 10)
	{
		u_dec_putchar(n / 10);
		c = n % 10 + '0';
	}
	write (1, &c, 1);
}

int	ft_printf_u_int_dec(va_list ap)
{
	unsigned int	number;
	int				number_len;

	number = va_arg(ap, unsigned int);
	u_dec_putchar(number);
	number_len = 0;
	while (number > 9)
	{
		number /= 10;
		number_len++;
	}
	return (number_len + 1);
}
