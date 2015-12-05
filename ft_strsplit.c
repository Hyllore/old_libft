/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:18:33 by droly             #+#    #+#             */
/*   Updated: 2015/12/05 15:16:18 by droly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count1(char const *s, int i, char c, int tmp)
{
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			tmp++;
		}
	}
	return (tmp);
}

static char	**ft_count2(const char *s, int tmp2, char c, char **tab)
{
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	while (s[i2] != '\0')
	{
		while (s[i2] == c)
			i2++;
		if (s[i2] != c)
		{
			i = 0;
			while (s[i2] != c && s[i2] != '\0')
			{
				i++;
				i2++;
			}
			if ((tab[tmp2] = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
				return (NULL);
			tmp2++;
		}
	}
	return (tab);
}

static char	**ft_treat(char **tab, int i2, char *s, char c)
{
	int		tmp2;
	int		i;

	i = 0;
	tmp2 = 0;
	while (s[i2] != '\0')
	{
		while (s[i2] == c)
			i2++;
		if (s[i2] != c)
		{
			i = 0;
			while (s[i2] != c && s[i2] != '\0')
			{
				tab[tmp2][i] = s[i2];
				i++;
				i2++;
			}
			tab[tmp2][i] = '\0';
			tmp2++;
		}
	}
	tab[tmp2 - 1] = NULL;
	return (tab);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	if ((tab = (char**)malloc(sizeof(char*) *
					(ft_count1(s, 0, c, 0)))) == NULL)
		return (NULL);
	tab = ft_count2(s, 0, c, tab);
	return (ft_treat(tab, 0, (char *)s, c));
}
