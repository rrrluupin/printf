/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_conversions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlupin <rlupin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:23:18 by rlupin            #+#    #+#             */
/*   Updated: 2022/02/16 17:28:33 by rlupin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/rlupin/Desktop/42projects/printf/ft_printf.h"

int	printf_conversions(va_list ap, char type_of_conv)
{
	if (type_of_conv == 'c')
		return (ft_printf_char(ap));
	else if (type_of_conv == 's')
		return (ft_printf_str(ap));
	else if (type_of_conv == 'p')
		return (ft_printf_v_ptr(ap));
	else if (type_of_conv == 'd')
		return (ft_printf_int_dec(ap));
	else if (type_of_conv == 'i')
		return (ft_printf_int_dec(ap));
	else if (type_of_conv == 'u')
		return (ft_printf_u_int_dec(ap));
	else if (type_of_conv == 'x')
		return (ft_printf_hex_in_lowcase(ap));
	else if (type_of_conv == 'X')
		return (ft_printf_hex_in_uppercase(ap));
	else if (type_of_conv == '%')
		return (ft_printf_per('%'));
	return (0);
}
