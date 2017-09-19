#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*array;

	i = -1;
	array = malloc(sizeof(int) * (length + 1));
	while (++i < length)
		array[i] = f(tab[i]);
	return (array);
}
