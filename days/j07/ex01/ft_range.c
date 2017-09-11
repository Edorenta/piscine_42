#include <stdlib.h>

int *ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	rng;
	
	rng = max - min;
	if (rng <= 0)
		return (NULL);
	array = (int*)malloc(sizeof(*array) * (rng));
	i = 0;
	rng++;
	while (--rng)
	{
		array[i] = max - rng;
		i++;
	}
	return (array);
}
