void	ft_putchar(char c);

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[++i]);
	return (i);
}

int		check_error(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nb;

	if (check_error(base))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nb = -nbr;
		}
		else
			nb = nbr;
		if (nb <= (ft_strlen(base) - 1))
			ft_putchar(base[nb]);
		if (nb > (ft_strlen(base) - 1))
		{
			ft_putnbr_base((nb / ft_strlen(base)), base);
			ft_putchar(base[nb % ft_strlen(base)]);
		}
	}
}
