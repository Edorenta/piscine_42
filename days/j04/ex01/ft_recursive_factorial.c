/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 15:07:58 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/07 06:08:56 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int res;

	if (nb > 12 || nb < 1)
		return (0);
	if (nb >= 2)
		res = (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
	return (res);
}
