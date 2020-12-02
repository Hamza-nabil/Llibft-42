/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 13:59:24 by hnabil            #+#    #+#             */
/*   Updated: 2019/11/04 12:27:35 by hnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;

	if (size == 0)
		return (ft_strlen(src));
	if (!src)
		return (0);
	i = -1;
	while (++i < size - 1 && src[i])
		dest[i] = ((char *)src)[i];
	dest[i] = '\0';
	return (ft_strlen(src));
}
