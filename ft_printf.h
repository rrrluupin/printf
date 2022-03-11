/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlupin <rlupin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:13:51 by rlupin            #+#    #+#             */
/*   Updated: 2022/02/16 17:20:46 by rlupin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	printf_conversions(va_list ap, char type_of_conv);

int	ft_printf_char(va_list ap);
int	ft_printf_str(va_list ap);
int	ft_printf_int_dec(va_list ap);
int	ft_printf_u_int_dec(va_list ap);
int	ft_printf_per(char percent);
int	ft_printf_hex_in_lowcase(va_list ap);
int	ft_printf_hex_in_uppercase(va_list ap);
int	ft_printf_v_ptr(va_list ap);

#endif