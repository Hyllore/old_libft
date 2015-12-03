/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:18:33 by droly             #+#    #+#             */
/*   Updated: 2015/12/03 21:04:11 by droly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_strsplit(char const *s, char c)
{
	int i;
	int i2;
	char **tab;
	int tmp;
	int tmp2;

	tmp2 = 0;
	i = 0;
	i2 = 0;
	tmp = 0;
	while ((char*)s[i] != '\0')
	{
		while ((char*)s[i] = c)
			i++;
		if ((char*)s[i] != c)
		{
			while((char*)s[i] != c)
				i++;
			tmp++;
		}
	}
	tab = (char**)malloc(sizeof(char*) * (tmp + 1));
	i = 0;
	i2 = 0;
	tmp = 0;
	while ((char*)s[i] != '\0')
	{
		while ((char*)s[i2] = c)
			i2++;
		if ((char*)s[i2] != c)
		{
			i = 0;
			while((char*)s[i2] != c)
			{
				i++;
				i2++;
			}
			tab[][tmp2] =(char*)malloc(sizeof(char*) * (i + 1));
		}
	}
}
