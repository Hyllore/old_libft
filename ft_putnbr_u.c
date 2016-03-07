/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:31:02 by droly             #+#    #+#             */
/*   Updated: 2016/01/25 14:54:47 by droly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_u(unsigned n)
{
	if (n >= 10)
	{
		ft_putnbr_u(n / 10);
	}
	else
		ft_putchar((n % 10) + '0');
}