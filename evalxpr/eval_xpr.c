/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_xpr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:57:43 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/17 23:41:12 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int     main(int ac, char **av)
{
    if (ac != 2)
        return (0);                             //Error: odd argument number
    return (eval_xpr(av[1]));
}

int     eval_xpr(char *str)
{
    int     i;
    int     j;
    int     xpr_ln;
    int     nb_par;
    int     nb_op;
    char    **xpr;

    var_init(&i, &j, &xpr_ln, &nb_par, &nb_op);
    xpr_ln = ft_strlen(str);
    while (str[++i] != 0)
    {
        if (str[i] == '(' || str[i] == ')')
            nb_par++;
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '%')
            nb_op++;
    }
    if (nb_par % 2 != 0)
        return (0);                                     //Error: odd parenthesis number
    nb_par /= 2;
    if (malloc(xpr_ln * sizeof(*xpr)) == NULL)          //Error: malloc did not alloc D1 correctly
        return (0);
    while (++j < nb_op)
        if (malloc(xpr_ln * sizeof(*xpr[j])) == NULL)   //Error: malloc did not alloc D2 correclty
            return (0);

}

void    var_init(int *i, int *j, int *k, int *l, int *m)
{
    *i = -1;
    *j = -1;
    *k = 0;
    *l = 0;
    *m = 0;
}