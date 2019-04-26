int		ft_iterative_power(int nb, int power)
{
	int		result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power >= 1)
	{
		result = result * nb;
		power--;
	}
		return (result);
}
