/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 21:15:22 by hnabil            #+#    #+#             */
/*   Updated: 2019/10/25 19:38:30 by hnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	if (!to_find[0])
		return ((char *)str);
	if (!len)
		return (0);
	while (str[i] && i < len)
	{
		j = 0;
		k = i;
		while (str[k] == to_find[j] && str[k] && to_find[j] && k < len)
		{
			k++;
			j++;
		}
		if (to_find[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
