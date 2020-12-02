/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:31:56 by hnabil            #+#    #+#             */
/*   Updated: 2019/10/25 19:37:38 by hnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		j;
	char	*s;

	s = (char *)str;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			j = i + 1;
		i++;
	}
	if (!c)
		return (&s[i]);
	if (j)
		return (s + j - 1);
	return (NULL);
}
