int		ft_is_prime(int nb)
{
	int		div;

	if (nb <= 1)
		return (0);
	div = 1;
	while (++div <= nb / 2)
	{
		if (nb % div == 0)
			return (0);
	}
	return (1);
}
