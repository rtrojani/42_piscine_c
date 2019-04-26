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

void	backtrack(int tab[8], int column, int *result)
{
	int		value;

	if (column == 8)
		*result += 1;
	else
	{
		value = 1;
		while (value <= 8)
		{
			if (check(tab, column, value))
			{
				tab[column] = value;
				backtrack(tab, column + 1, result);
			}
			value++;
		}
	}
}

int		ft_eight_queens_puzzle(void)
{
	int		tab[8];
	int		i;
	int		result;

	i = 0;
	result = 0;
	while (i < 8)
		tab[i++] = 0;
	backtrack(tab, 0, &result);
	return (result);
}
