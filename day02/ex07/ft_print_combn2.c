void	ft_putchar (char c);

void	print_tab(int *tab, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	if (tab[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int		tab[n];
	int		i;

	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	while (tab[0] <= (10 - n))
	{
		i = 1;
		print_tab(tab, n);
		tab[n - i]++;
		while (tab[n - i] == (10 - i + 1))
		{
			tab[n - i - 1]++;
			i++;
		}
		while (i > 1)
		{
			tab[n - i + 1] = tab[n - i] + 1;
			i--;
		}
	}
}
