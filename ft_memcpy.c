/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:13:31 by droly             #+#    #+#             */
/*   Updated: 2015/11/27 14:28:33 by droly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*str;
	char	*src1;

	i = 0;
	str = (char*)dst;
	src1 = (char*)src;
	if (!src1)
		return (str);
	while (i < (int)n)
	{
		str[i] = src1[i];
		i++;
	}
	return (str);
}
