/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 17:11:19 by droly             #+#    #+#             */
/*   Updated: 2015/12/03 11:33:56 by droly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tab;

	tab = malloc(sizeof(char) * size);
	if (tab == NULL)
		return (NULL);
	while (tab[size] != '\0')
	{
		tab[size] = '\0';
		size--;
	}
	return (tab);
}
