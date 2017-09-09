#include <stdlib.h>

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\n';
	dest[i + j + 1] = '\0';
	return (dest);
}

char *ft_concat_params(int argc, char **argv)
{
	char		*str;
	int		i;

	i = -1;
	str = (char*)malloc(sizeof(*str) * (argc));
	while (++i < argc)
		str = ft_strcat(str, argv[i + 1]);
	return (str);
}
