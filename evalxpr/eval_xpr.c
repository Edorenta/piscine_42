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

int flag = 0;

void    var_init(int *i, int *j, int *k, int *l, int *m)
{
    *i = -1;
    *j = -1;
    *k = 0;
    *l = 0;
    *m = 0;
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
        return (0);     //Error: odd parenthesis number
    nb_par /= 2;
    i = -1;
    while (str[++i] != 0)
        if (is_space(str[i]))
            j++;
    i = -1;
    if ((xpr = malloc((nb_op) * sizeof(*xpr))) == NULL)     //Error: malloc did not alloc D2 correclty
        return (0);
    while (++i < nb_op)
        if ((xpr[i] = malloc((xpr_ln - j + 1) * sizeof(*xpr[i]))) == NULL)     //Error: malloc did not alloc D1 correctly
            return (0);
    var_init(&i, &j, &xpr_ln, &nb_par, &nb_op);
    while (str[++i])        //Space remover
        if (!is_space(str[i]))
        {
            if (str[i] == '(')
            {
                while (str[i] != ')')
                    //////////////////////////////!!!!!!!! TO DO : INSIDE PAR PRIOR CALCULATION
                    i++;
            }
            if (is_op(str[i]))
            {
                nb_op++;
                if ((nb_op % 2) == 0)
                {
                    xpr_ln++;
                    j = -1;
                }
            }
            if (is_num(str[i]) || is_op(str[i]))
                xpr[xpr_ln][++j] = str[i];
        }
    i = -1;
    ////////////////////////////////////// COMMENT
    while (++i <= xpr_ln)
    {
        ft_putstr(xpr[i]);
        ft_putchar('\n');
    }
    ///////////////////////////////////// END OF COMMENT
    ///////////////////////////////////// CALCULATE THE PARSED XPR[i] THEN RETURN THE RESULT
    return (0);    
}

int     main(int ac, char **av)
{
    if (ac != 2)
        return (0);                             //Error: odd argument number
    return (eval_xpr(av[1]));
}