void	ft_putchar(char c);

void	first_line(int x)
{
		ft_putchar('A');
		if (x > 1)
		{
			if (x > 2)
			{
				while (x > 2)
				{
					ft_putchar('B');
					x--;
				}
			}
			ft_putchar('C');
		}
		ft_putchar('\n');
}

void	middle_lines(int x, int y)
{
	int		i;

	while (y-- > 2)
	{
		ft_putchar('B');
		i = x - 2;
		while (i-- > 0)
			ft_putchar(' ');
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
	}
}

void	last_line(int x)
{
		ft_putchar('A');
		if (x > 1)
		{
			if (x > 2)
			{
				while (x > 2)
				{
					ft_putchar('B');
					x--;
				}
			}
			ft_putchar('C');
		}
		ft_putchar('\n');
}

void	colle(int x, int y)
{
	first_line(x);
	if (y > 2)
		middle_lines(x, y);
	if (y > 1)
		last_line(x);
}
