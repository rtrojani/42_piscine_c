void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int		h;
	int		t;
	int		u;

	h = '0' - 1;
	while (h++ <= '7')
	{
		t = h;
		while (t++ <= '8')
		{
			u = t;
			while (++u <= '9')
			{
				ft_putchar(h);
				ft_putchar(t);
				ft_putchar(u);
				if (!(h == '7' && t == '8' && u == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
