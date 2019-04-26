void	ft_putchar(char c);

void	print_nbr(int *nbr, int n)
{
	int		i;
	int		ascending;

	i = 0;
	ascending = 1;
	while (++i < n)
	{
		if (nbr[i - 1] > nbr[i])
			ascending = 0;
	}
	i = 0;
	while ((ascending == 1) && (i < n))
	{
		ft_putchar(nbr[i++] + '0');
		if (nbr[0] != (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

int		main(void)
{
	int		tab[6] = {3, 4, 5, 6, 7, 8};

	print_nbr(tab, 6);
	return (0);
}
