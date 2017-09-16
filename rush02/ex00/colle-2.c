/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 16:44:29 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/16 21:23:28 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "libft_light.h"

int		main(void)
{
	int handle;
	int shift;
	char *buffer;

	shift = 1;	
	handle = read(0, buffer, shift);
	return 0;
}

