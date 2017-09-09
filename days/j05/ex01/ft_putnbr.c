/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 01:47:15 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/05 03:10:11 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	int pow;
	
	pow = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
		return;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
	return;
}

int		main(void)
{
	int i;
	
	i =	-9817263;
	ft_putnbr(i);
	return (0);
}
