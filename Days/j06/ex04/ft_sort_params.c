void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i]);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1++ == *s2++)
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
	return (*--s1 - *--s2);
}

int		main(int argc, char **argv)
{
	char	*tmp;
	int		swap;
	int		i;

	swap = 1;
	while (swap)
	{
		swap = 0;
		i = 0;
		while (++i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				swap = 1;
			}
		}
	}
	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]), ft_putchar('\n');
	return (0);
}
