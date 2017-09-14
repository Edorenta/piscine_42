#include "ft_stock_tab.h"

struct s_item_par *ft_param_to_tab(int ac, char **av)
{
	ft_stock_tab	*item;
	int		i;
	int		j;

	if ((item = (ft_stock_tab*)malloc(sizeof(ft_stock_tab) * (ac + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		item[i].size_param = j;
		item[i].str = av[i];
		item[i].copy = ft_strdup(av[i]);
		item[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	item[i].str = 0;
	return (item);
}