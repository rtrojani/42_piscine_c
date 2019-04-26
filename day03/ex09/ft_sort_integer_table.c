void	ft_swap(int *a, int *b)
{
	int		c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		i_max;

	while (size > 1)
	{
		i = 0;
		i_max = 0;
		while (i < size)
		{
			if (tab[i] > tab[i_max])
				i_max = i;
			i++;
		}
		ft_swap(&tab[i_max], &tab[size - 1]);
		size--;
	}
}
