void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*arg;

	i = argc - 1;
	j = -1;
	while (i >= 1)
	{
		arg = argv[i];
		while (arg[++j] != '\0')
			ft_putchar(*arg);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
