void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*arg;

	i = 1;
	j = -1;
	whilei (i < argc)
	{
		arg = argv[i];
		while (arg[++j] != '\0')
			ft_putchar(arg[j]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
