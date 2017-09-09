/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 20:44:18 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/07 20:44:45 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest_size = i;
	i = 0;
	while (src[i] != '\0')
		i++;
	src_size = i;
	i = 0;
	while (src[i] != '\0' && ((dest_size + i) < (size - 1)))
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (src_size + ((dest_size < size) ? dest_size : size));
}
