/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 17:11:19 by droly             #+#    #+#             */
/*   Updated: 2015/12/01 17:20:33 by droly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tab;

	tab = malloc(sizeof(void) * size);
	if (tab == NULL)
		return (NULL);
	while (size != '\0')
	{
		tab[size] = '\0';
		size--;
	}
	return (tab);
}
