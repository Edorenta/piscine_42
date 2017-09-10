/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 12:03:51 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/10 12:03:54 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 12:03:51 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/10 12:03:54 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	str_ok(char *s1, char *s2);
char *str_offset(char *str, int i);

int match(char *s1, char *s2)
{
	int res;

	res = 0;
	if (str_ok(s1, s2) == 0)
		return(res);
	else
	{
		if (s1[0] == s2[0] && s1[0] != '*')
			res = match(str_offset(s1,1), str_offset(s2,1));
		else
		{
			if (*str_offset(s1,1) == '*' && *str_offset(s2,1) == '*')
				res = match(str_offset(s1,1), s2);
			else
			{
				if (s2[0] == '*' && s1[0] == '\n')
					res = match(s1, str_offset(s2,1));
				else
				{
				    if (s2[0] != s1[0] && *str_offset(s2,1) == '\0')
					    return (0);
					else
					{
					    if (s2[0] == '*' && s1[0] != '\n')
					        {
						    if (match(s1, str_offset(s2,1)) == 1 || match(str_offset(s1,1), s2) == 1)
							    res = 1;
					    }
					    else
						    return (0);
					}
				}
			}
		}
	}
	return (res);
}

char *str_offset(char *str, int i)
{
	return(str + i);
}

int	str_ok(char *s1, char *s2)
{
	if (s1[0] == '\0' && s2[0] == '\0')
		return (0);
	return (1);
}

int main()
{
	char *test1 = "aba";
	char *test2 = "aba";
	printf("Expected: %d", match(test1, test2));

	return(0);
}