void	ft_putchar(char c);

void	print_comb1(void)
{
	int		i;

	i = 0;
	while (i++ <= 9)
	{
		ft_putchar(i + '0' - 1);
		if (i < 10)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	print_nbr(int *nbr, int n)
{
	int		i;
	int		ascending;

	i = 0;
	ascending = 1;
	while (++i < n)
	{
		if (nbr[i - 1] >= nbr[i])
			ascending = 0;
	}
	i = 0;
	while ((ascending == 1) && (i < n))
	{
		ft_putchar(nbr[i] + '0');
		i++;
	}
	if ((nbr[0] != (10 - n)) && (ascending == 1))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int		nbr[n];
	int		i;

	if (n == 1)
		print_comb1();
	i = 0;
	while ((i < n) && (n > 1))
	{
		nbr[i] = i;
		i++;
	}
	while ((nbr[0] <= (10 - n)) && (n > 1))
	{
		print_nbr(nbr, n);
		nbr[n - 1]++;
		i = n;
		while (i > 0)
		{
			i--;
			if (nbr[i] > 9)
			{
				nbr[i] = 0;
				nbr[i - 1]++;
			}
		}
	}
}
