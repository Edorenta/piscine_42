#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;
	int	rng;

	rng = max - min;
	if (rng <= 0)
		return (0);
	array = (int*)malloc(sizeof(*array) * (rng));
	i = 0;
	rng++;
	while (--rng)
	{
		array[i] = max - rng;
		i++;
	}
	*range = array;
	return (i);
}
