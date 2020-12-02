/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 13:56:33 by hnabil            #+#    #+#             */
/*   Updated: 2019/10/25 19:36:19 by hnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	ld;
	size_t	ls;
	size_t	i;

	ls = ft_strlen(src);
	ld = ft_strlen(dest);
	if (size <= ld)
		ls += size;
	else
		ls += ld;
	i = 0;
	if (size)
	{
		while (ld < size - 1 && src[i])
		{
			dest[ld] = src[i];
			ld++;
			i++;
		}
		dest[ld] = '\0';
	}
	return (ls);
}
