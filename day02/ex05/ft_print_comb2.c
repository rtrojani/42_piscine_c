void	ft_putchar(char c);

/*void	display(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
}*/

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	b = a + 1;
	while (a < 99)
	{
		while (b <= 99)
		{
				ft_putchar(a / 10 + 48);
				ft_putchar(a % 10 + 48);
				ft_putchar(' ');
				ft_putchar(b / 10 + 48);
				ft_putchar(b % 10 + 48);
				if (!(a == 98 && b == 99))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			b++;
		}
		b = ++a + 1;
	}
}
