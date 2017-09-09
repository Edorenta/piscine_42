void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int		i;
	int		j;

	i = -1;
	while (tab[++i] != '\0')
	{
		j = -1;
		while (tab[i][++j])
		{
			ft_putchar(tab[i][j]);
		}
		ft_putchar('\n');
	}
}
