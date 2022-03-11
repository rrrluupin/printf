/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlupin <rlupin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:34:40 by rlupin            #+#    #+#             */
/*   Updated: 2021/10/27 16:47:41 by rlupin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	sizemem;
	void	*dst;

	sizemem = size * count;
	dst = malloc(sizemem);
	if (!dst)
	{
		return (0);
	}
	ft_memset(dst, 0, sizemem);
	return (dst);
}
