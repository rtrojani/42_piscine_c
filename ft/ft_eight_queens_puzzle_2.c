void	ft_putchar(char c);

int		check(int tab[8], int column, int row)
{
	int		i;

	i = 0;
	while (i < column)
	{
		if ((tab[i] == row) 
			|| (tab[i] + i == row + column) 
			|| (tab[i] - i == row - column))
			return (0);
		i++;
	}
	return (1);
}

void	print_tab(int tab[8])
{
	int		i;

	i = 0;
	while (i < 8)
		ft_putchar('0' + tab[i++]);
	ft_putchar('\n');
}

void	backtrack(int tab[8], int column)
{
	int		value;

	if (column == 8)
		print_tab(tab);
	else
	{
		value = 1;
		while (value <= 8)
		{
			if (check(tab, column, value))
			{
				tab[column] = value;
				backtrack(tab, column + 1);
			}
			value++;
		}
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	int		tab[8];
	int		i;

	i = 0;
	while (i < 8)
		tab[i++] = 0;
	backtrack(tab, 0);
}
