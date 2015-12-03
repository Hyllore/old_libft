/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 14:13:26 by droly             #+#    #+#             */
/*   Updated: 2015/12/03 19:57:32 by droly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_size(int n, int i)
{
	if (n > 0)
		return (ft_size(n / 10, ++i));
	return (i);
}

char		*ft_content(char *str, int i2, int i, int n)
{
	if (n == 0)
		return ("0");
	while (i > 0)
	{
		str[i2 - 1] = (n % 10) + 48;
		n = n / 10;
		i2--;
		i--;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		i2;
	int		neg;

	neg = 0;
	i = 0;
	i2 = 0;
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		n = -1 * n;
		neg = 1;
	}
	if ((str = malloc(sizeof(char) * ft_size(n, i))) == NULL)
		return (NULL);
	i2 = i2 + ft_size(n, i);
	i = i2;
	if (neg == 1)
	{
		i2++;
		str[0] = '-';
	}
	return (ft_content(str, i2, i, n));
}
