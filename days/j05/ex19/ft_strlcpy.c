/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 21:10:55 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/07 21:11:26 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*d;
	char			*s;
	unsigned int	n;

	d = dest;
	s = src;
	n = size;
	if (n != 0)
	{
		while (!--n)
		{
			if ((*d++ = *s++) == '\0')
				break ;
		}
	}
	if (n == 0 && size != 0)
		*d = '\0';
	while (*s)
		s++;
	return (s - src);
}
