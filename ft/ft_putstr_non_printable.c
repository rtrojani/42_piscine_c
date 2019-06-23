void	ft_putchar(char c);

void	putnbr_hexa(int c, char *base)
{
	if (c <= (15))
		ft_putchar(base[c]);
	if (c > (15))
	{
		putnbr_hexa((c / 16), "0123456789abcdef");
		ft_putchar(base[c % 16]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		{
			if (str[i] < 32 || str[i] > 126)
				{
					ft_putchar('\\');
					if (str[i] < 16)
						ft_putchar('0');
					putnbr_hexa(str[i], "0123456789abcdef");
				}
			else
				ft_putchar(str[i]);
			i++;
		}
}
