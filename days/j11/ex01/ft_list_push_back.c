/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:54:09 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/18 18:02:04 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*item;

	item = *begin_list;
	if (item)
	{
		while (item->next)
			item = item->next;
		item->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
