/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:39:09 by hnabil            #+#    #+#             */
/*   Updated: 2019/10/20 17:35:06 by hnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)dst;
	p2 = (unsigned char *)src;
	if (p2[i])
	{
		while (i < n)
		{
			p1[i] = p2[i];
			if (p2[i] == (unsigned char)c)
				return (p1 + i + 1);
			i++;
		}
	}
	return (NULL);
}
