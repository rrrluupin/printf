/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_n_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlupin <rlupin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:07:31 by rlupin            #+#    #+#             */
/*   Updated: 2022/01/10 16:07:35 by rlupin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_n_hex(unsigned int h_num, const char *base)
{
	char	array_of_hex[30];
	int		pos_in_array;
	int		printlen;

	pos_in_array = 0;
	printlen = 0;
	if (h_num < 0)
		h_num = 4294967295 + h_num;
	while (h_num > 15)
	{
		array_of_hex[pos_in_array] = h_num % 16;
		h_num /= 16;
		pos_in_array++;
	}
	array_of_hex[pos_in_array] = h_num;
	while (pos_in_array >= 0)
	{
		ft_putchar_fd(base[(int)array_of_hex[pos_in_array]], 1);
		printlen++;
		pos_in_array--;
	}
	return (printlen);
}

int	ft_printf_hex_in_lowcase(va_list ap)
{
	char	*base;
	int		h_num;

	base = "0123456789abcdef";
	h_num = va_arg(ap, int);
	return (print_n_hex(h_num, base));
}

int	ft_printf_hex_in_uppercase(va_list ap)
{
	char	*base;
	int		h_num;

	base = "0123456789ABCDEF";
	h_num = va_arg(ap, int);
	return (print_n_hex(h_num, base));
}
