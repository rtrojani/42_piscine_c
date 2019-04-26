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

int		ft_find_next_prime(int nb)
{
	int		next_prime;

	if (ft_is_prime(nb) == 1)
		next_prime = nb;
	else
		next_prime = ft_find_next_prime(nb + 1);
	return (next_prime);
}
