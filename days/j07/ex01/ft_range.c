/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:06:46 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/14 05:00:05 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*array;
	int		i;
	int		rng;

	rng = max - min;
	if (rng <= 0)
		return (NULL);
	array = (int*)malloc(sizeof(*array) * (rng));
	i = -1;
	rng++;
	while (--rng)
		array[++i] = max - rng;
	return (array);
}
