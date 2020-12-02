/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 21:59:37 by hnabil            #+#    #+#             */
/*   Updated: 2019/10/25 20:10:27 by hnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_exist(const char *str, const char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char			*res;
	size_t			len;
	unsigned int	i;

	if (!s1 || !set)
		return (0);
	i = 0;
	len = ft_strlen(s1);
	while (ft_exist(set, s1[i]) && i < len)
		i++;
	if (i == len)
		return (ft_strdup(""));
	while (ft_exist(set, s1[--len]))
		;
	res = ft_substr(s1, i, len - i + 1);
	return (res);
}
