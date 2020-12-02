/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:40:50 by hnabil            #+#    #+#             */
/*   Updated: 2019/10/24 13:55:24 by hnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	if (!dst && !src)
		return (NULL);
	i = -1;
	while (++i < n)
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	return (dst);
}
