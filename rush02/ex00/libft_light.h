/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_light.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:31:48 by pde-rent          #+#    #+#             */
/*   Updated: 2017/09/16 18:47:20 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define EVEN(x) (((x % 2) != 0) ? FALSE : TRUE)
# define ABS(x) ((x > 0) ? x : -x)
# define MAX(a, b) ((a) < (b) ? (b) : (a))
# define MIN(a, b) ((a) < (b) ? (a) : (b))
# define MEAN(x,y) (((x) + (y)) / 2)
# define CONCAT(arg1, arg2)  arg1##arg2
# define TRUE 1
# define FALSE 0

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_swap(int *a, int *b);
void	ft_print_words_tables(char **tab);
void	ft_sort_integer_table(int *tab, int size);
char	*ft_strdup(char *src);
char	**ft_split_whitespaces(char *str);
char	*ft_strrev(char *str);
int		ft_atoi(char *str);
int		ft_strstr(char *str, char *to_find);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		alphanum(char c);
int		ft_strcat(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
int		len(char *str);
int		ft_fact(int nb);
int		ft_pow(int nb, int power);
int		ft_sqrt(int nb);
int		ft_fibo(int index);
int		ft_prime(int nb);
int		ft_gcdr(int x, int y);

#endif