/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 20:35:18 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/07 20:35:36 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	size;
	int	cmp;
	int i;

	size = 1;
	i = 0;
	cmp = 0;
	while (1)
	{
		cmp += (s1[i] - s2[i]);
		if (i >= (int)n - 1)
			return (cmp);
		if (s1[i] == '\0' && s2[i] == '\0')
			return (cmp);
		if (s1[i] == s2[i])
			i++;
		else
			return (cmp);
	}
}
