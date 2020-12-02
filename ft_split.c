/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 15:41:22 by hnabil            #+#    #+#             */
/*   Updated: 2019/11/13 16:14:14 by hnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_fr(char **tab, int i)
{
	int		a;

	a = 0;
	while (a <= i)
	{
		free(tab[a]);
		a++;
	}
	free(tab);
	return (NULL);
}

static int	ft_calcul_mot(char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (j);
}

static char	**ft_alloc(char **t, char const *s, char c, int n)
{
	int		i;
	int		k;
	int		j;

	i = 0;
	j = 0;
	while (i < n && s[j])
	{
		k = 0;
		while (s[j] && s[j] != c)
		{
			k++;
			j++;
		}
		if (k != 0)
		{
			if (!(t[i] = (char *)malloc(sizeof(char) * (k + 1))))
				return (ft_fr(t, i));
			i++;
		}
		j++;
	}
	t[n] = 0;
	return (t);
}

static void	ft_remp(char **t, char const *s, char c, int n)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (i < n && s[j])
	{
		k = 0;
		if (s[j] != c)
		{
			while (s[j] && s[j] != c)
			{
				t[i][k] = s[j];
				k++;
				j++;
			}
			t[i][k] = '\0';
			i++;
		}
		else
			j++;
	}
}

char		**ft_split(char const *s, char c)
{
	int		n;
	char	**t;

	if (s == NULL)
		return (0);
	n = ft_calcul_mot(s, c);
	if (!(t = (char **)malloc(sizeof(char *) * (n + 1))))
		return (0);
	if (!(t = ft_alloc(t, s, c, n)))
		return (0);
	ft_remp(t, s, c, n);
	return (t);
}
