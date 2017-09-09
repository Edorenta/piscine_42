/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_next_prime.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 06:35:16 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/06 07:45:25 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int	i;

	if ((nb % 2 == 0 && nb != 2) || nb <= 1)
		return (0);
	i = 3;
	while (i * i <= nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	nb++;
	while (nb++)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
	}
	return (0);
}
