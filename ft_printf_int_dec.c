/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int_dec.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlupin <rlupin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:07:07 by rlupin            #+#    #+#             */
/*   Updated: 2022/01/10 16:07:17 by rlupin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_int_dec(va_list ap)
{
	int	number;
	int	number_len;

	number_len = 0;
	number = va_arg(ap, int);
	ft_putnbr_fd(number, 1);
	if (number == -2147483648)
		return (11);
	else if (number < 0 && number != -2147483648)
	{
		number *= -1;
		number_len = 1;
	}
	while (number >= 10)
	{
		number = number / 10;
		number_len++;
	}
	return (number_len + 1);
}
