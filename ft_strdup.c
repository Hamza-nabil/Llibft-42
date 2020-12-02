/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 18:23:40 by hnabil            #+#    #+#             */
/*   Updated: 2019/10/18 19:54:56 by hnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	i = -1;
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (++i < len)
		str[i] = (char)s[i];
	str[i] = '\0';
	return (str);
}
