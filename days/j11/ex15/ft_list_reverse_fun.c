/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:54:56 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/18 15:54:59 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*item;
	t_list	*next_item;
	int		size;
	int		i;
	void	*tmp;

	item = begin_list;
	next_item = item->next;
	while (next_item != NULL)
	{
		next_item = item->next;
		if (item == b)
			break ;
		tmp = item->data;
		item->data = b->data;
		b->data = tmp;
		item = item->next ? item->next : item;
		size--;
	}
	item = begin_list;
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*item;
	t_list	*next_item;
	t_list	*tmp2;

	item = begin_list;
	if (item && (item->next))
    {
        next_item = list->next;
        tmp2 = next_item->next;
        list->next = 0;
        next_item->next = list;
        while (tmp2)
        {
            list = next_item;
            next_item = tmp2;
            tmp2 = tmp2->next;
            next_item->next = list;
        }
        begin_list = next_item;
    }
}