/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:54:34 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/18 15:54:35 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*item;
	t_list	*tmp;
	tmp = *begin_list;
	while (item != NULL)
	{
		item = tmp->next;
		free(tmp);
		tmp = item;
	}
	*begin_list = NULL;
}