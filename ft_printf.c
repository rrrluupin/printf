/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlupin <rlupin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:12:52 by rlupin            #+#    #+#             */
/*   Updated: 2022/02/16 17:26:26 by rlupin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_withouttype(char simbol, int pos)
{
	write(1, &simbol, 1);
	pos++;
}

static int	type_of_conv(int argtype)
{
	if (argtype != '\0')
	{
		if (argtype == 'c')
			return (argtype);
		if (argtype == 's')
			return (argtype);
		if (argtype == 'p')
			return (argtype);
		if (argtype == 'd')
			return (argtype);
		if (argtype == 'i')
			return (argtype);
		if (argtype == 'u')
			return (argtype);
		if (argtype == 'x')
			return (argtype);
		if (argtype == 'X')
			return (argtype);
		if (argtype == '%')
			return (argtype);
	}
	return (1);
}

int	ft_printf(const char *str, ...)
{
	int		pos;
	int		len;
	char	argtype;
	va_list	ap;

	va_start(ap, str);
	pos = 0;
	len = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] == '%')
		{
			argtype = type_of_conv(str[pos + 1]);
			len += printf_conversions(ap, argtype);
			pos += 1;
		}
		else
		{
			ft_print_withouttype(str[pos], pos);
			len++;
		}
		pos++;
	}
	va_end(ap);
	return (len);
}
