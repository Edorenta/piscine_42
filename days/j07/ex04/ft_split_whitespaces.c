#include <stdlib.h>

char **ft_split_whitespaces(char *str)
{
	char	**dest;
	char	**tmp;
	int	i;
	int	i;
	int	nb_words;

	nb_words = 0;
	i = -1;
	j = 0;
	while (str[i++])
		if (str[i] != ' ' || str[i] != '\t' || str[i] != '\n')
			nb_words++;
	*dest = (char*)malloc(sizeof(char) * (i + 1));
	i = -1;
	while (++i < nb_words)
	{
		j = 0;
		while (str[j] != ' ' || str[j] != '\t' || str[j] != '\n' || str[j] != '\0')
		{
			tmp[j] = str[j];
			i++;
		}
		dest[i] = tmp;
		i++;
	}
	return (dest);
}
