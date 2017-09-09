#include <stdlib.h>

char **ft_split_whitespaces(char *str)
{
	char	**str_split;
	char	**str_tmp;
	int	i;
	int	i;
	int	nb_words;

	nb_words = 0;
	i = -1;
	j = 0;
	while (str[i++])
		if (str[i] != 9 || str[i] != 32 || str[i] != '\n')
			nb_words++;
	*str_split = (char*)malloc(sizeof(char) * (i + 1));
	i = -1;
	while (++i < nb_words)
	{
		j = 0;
		while (str[j] != 9 || str[j] != 32 || str[j] != '\n' || str[j] != '\0')
		{
			str_tmp[j] = str[j];
			i++;
		}
		str_split[i] = str_tmp;
		i++;
	}
	return (str_split);
}
