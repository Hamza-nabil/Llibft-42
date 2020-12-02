/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 21:13:07 by hnabil            #+#    #+#             */
/*   Updated: 2019/11/13 16:07:48 by hnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tab;
	size_t	lnew;

	i = 0;
	if (!(s))
		return (0);
	lnew = ft_strlen(&s[start]);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (lnew >= len)
		lnew = len;
	tab = malloc(sizeof(char) * (lnew + 1));
	if (!tab)
		return (0);
	while (i < lnew && s[start] != '\0')
		tab[i++] = s[start++];
	tab[i] = '\0';
	return (tab);
}
