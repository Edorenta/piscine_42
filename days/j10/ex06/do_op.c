/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 18:15:23 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/20 02:57:32 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs/libop.h"

int		(*ope[5])(int, int);

void	init_op(void)
{
	ope[0] = sum;
	ope[1] = sub;
	ope[2] = mult;
	ope[3] = div;
	ope[4] = mod;
}

int		calculate(int x, int y, char op)
{
	if (op == '+')
		return ((*ope[0])(x, y));
	else if (op == '-')
		return ((*ope[1])(x, y));
	else if (op == '*')
		return ((*ope[2])(x, y));
	else if (op == '/')
	{
		if (y == 0)
			ft_putstr("Stop : division by ");
		else
			return ((*ope[3])(x, y));
	}
	else if (op == '%')
	{
		if (y == 0)
			ft_putstr("Stop : modulo by ");
		else
			return ((*ope[4])(x, y));
	}
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	init_op();
	if (len(av[2]) == 1 && is_op(av[2][0]))
		ft_putnbr(calculate(ft_atoi(av[1]), ft_atoi(av[3]), av[2][0]));
	else
		ft_putchar('0');
	return (0);
}
