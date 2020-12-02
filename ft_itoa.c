/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 22:43:05 by hnabil            #+#    #+#             */
/*   Updated: 2019/10/29 21:56:13 by hnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int n)
{
	if (n >= 0 && n <= 9)
		return (1);
	if (n >= -9 && n < 0)
		return (2);
	else
		return (1 + ft_size(n / 10));
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_size(n);
	if (!(str = (char *)malloc(len + 1)))
		return (0);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	if (!n)
		str[0] = '0';
	while (n)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
