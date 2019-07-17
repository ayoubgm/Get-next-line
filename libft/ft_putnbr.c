/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gayoub <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 21:18:27 by gayoub            #+#    #+#             */
/*   Updated: 2019/04/10 23:41:19 by gayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_putnbr(int n)
{
	unsigned int	un;

	if (n < 0)
	{
		ft_putchar('-');
		un = -1 * n;
	}
	else
		un = n;
	if (un >= 10)
	{
		ft_putnbr(un / 10);
	}
	ft_putchar(un % 10 + '0');
}
