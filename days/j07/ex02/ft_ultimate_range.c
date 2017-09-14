/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:06:50 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/14 05:00:07 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*array;
	int		rng;

	rng = max - min;
	array = (int*)malloc(sizeof(*array) * (rng + 1));
	if (rng <= 0)
	{
		*range = tab;
		return (diff);
	}
	i = -1;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (rng);
}
