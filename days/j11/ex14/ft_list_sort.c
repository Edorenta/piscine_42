/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:54:54 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/18 15:54:55 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_swap(t_list **item1, t_list **item2)
{
	void	*tmp_data;

	tmp_data = (*item1)->data;
	(*item1)->data = (*item2)->data;
	(*item2)->data = tmp_data;
}

void		ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*item;
	t_list	*next_item;

	if (!(*begin_list == NULL || (*begin_list)->next == NULL))
    {
        item = *begin_list;
        next_item = item->next;
        while (next_item != NULL)
        {
            if ((*cmp)(item->data, next_item->data) > 0)
                ft_swap(&item, &next_item);
            item = item->next;
            next_item = next_item->next;
        }
    }
}