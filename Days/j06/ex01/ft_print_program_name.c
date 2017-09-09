void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;

	i = -1;
	while (argv[0][++i] != '\0')
		ft_putchar(argv[0][i]);
	return (0);
}
