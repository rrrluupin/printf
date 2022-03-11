/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_v_ptr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlupin <rlupin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:12:21 by rlupin            #+#    #+#             */
/*   Updated: 2022/01/10 16:12:39 by rlupin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_ptr_hex(unsigned long long h_num, char *base)
{
	char	array_of_hex[99];
	int		pos_in_array;
	int		printlen;

	pos_in_array = 0;
	printlen = 0;
	while (h_num > 15)
	{
		array_of_hex[pos_in_array] = h_num % 16;
		h_num = h_num / 16;
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

int	ft_printf_v_ptr(va_list ap)
{
	unsigned long long	ptr;

	ptr = (unsigned long long)va_arg(ap, void *);
	if (!ptr)
	{
		ft_putstr_fd("0x0", 1);
		return (3);
	}
	else
	{
		ft_putstr_fd("0x", 1);
		return (ft_printf_ptr_hex(ptr, "0123456789abcdef") + 2);
	}
}
