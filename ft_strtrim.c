/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 15:47:07 by droly             #+#    #+#             */
/*   Updated: 2015/12/02 16:58:59 by droly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int i;
	int end;

	i = 0;
	end = 0;
	if (s == NULL)
		return (NULL);
	if (s[0] != ' ' || s[0] != '\t' || s[0] != '\n')
	{
		while (s[i] != '\0')
			i++;
		if (s[i - 1] != ' ' || s[i - 1] != '\t' || s[i - 1] != '\n')
			return ((char*)s);
		i = 0;
	}
	if (s[0] == ' ' || s[0] == '\t' || s[0] == '\n')
	{
		while (s[end] != '\0')
			end++;
		while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
			end--;
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
		end = end - i;
	}
	return(ft_strsub(s, i, end));
}
