/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlupin <rlupin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:08:38 by rlupin            #+#    #+#             */
/*   Updated: 2022/01/10 16:10:58 by rlupin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_str(va_list ap)
{
	int		order;
	char	*str;

	str = (char *)va_arg(ap, char *);
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	order = 0;
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
