/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:53:58 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/18 15:54:06 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*new_elem;

	new_elem = malloc(sizeof(*new_elem));
	if (new_elem)
	{
		new_elem->data = data;
		new_elem->next = NULL;
	}
	return (new_elem);
}