/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlupin <rlupin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:06:24 by rlupin            #+#    #+#             */
/*   Updated: 2022/01/10 16:06:34 by rlupin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_char(va_list ap)
{
	char	sim;

	sim = (char)va_arg(ap, int);
	ft_putchar_fd(sim, 1);
	return (1);
}
