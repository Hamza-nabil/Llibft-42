/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:41:09 by hnabil            #+#    #+#             */
/*   Updated: 2019/10/27 16:30:19 by hnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t i;

	i = n;
	if (dst > src)
		while (i--)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
