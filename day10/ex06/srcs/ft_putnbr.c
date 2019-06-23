void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb != -2147483648)
			nb = -nb;
		else
		{
			ft_putchar('2');
			nb = 147483648;
		}
	}
	if (nb < 10)
		ft_putchar(nb + 48);
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}
