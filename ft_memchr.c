/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:18:29 by droly             #+#    #+#             */
/*   Updated: 2015/11/30 12:33:26 by droly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	i = 0;
	s1 = (unsigned char*)s;
	if (!s1)
		return (NULL);
	while (i < n)
	{
		if (s1[i] == (unsigned char)c)
			return (char*)&(s1[i]);
		i++;
	}
	return (NULL);
}
