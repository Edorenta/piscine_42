/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:06:57 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/14 05:00:11 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_delimiter(char c);
int		nb_words(char *str);

char	**ft_split_whitespaces(char *str)
{
	char	**dest;
	int		i;
	int		j;
	int		k;

	i = -1;
	dest = (char**)malloc(sizeof(*dest) * (nb_words(str)));
	j = -1;
	while (++j <= nb_words(str))
		dest[j] = malloc(sizeof(*dest[j]) * i);
	i = -1;
	j = 0;
	k = -1;
	while (str[++i] != '\0' && j <= nb_words(str))
	{
		if (!is_delimiter(str[i]))
			if (i == 0 || is_delimiter(str[i - 1]))
			{
				k = -1;
				j++;
			}
		dest[j][++k] = str[i];
	}
	dest[j][++k] = '\0';
	return (dest);
}

int		is_delimiter(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\r')
		return (1);
	return (0);
}

int		nb_words(char *str)
{
	int		i;
	int		nb_words;

	i = 0;
	nb_words = 0;
	while (str[++i] != '\0')
	{
		if (!is_delimiter(str[i]))
			if (i == 0 || is_delimiter(str[i - 1]))
				nb_words++;
	}
	return (nb_words);
}
