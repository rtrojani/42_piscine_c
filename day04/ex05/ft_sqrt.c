int		ft_sqrt(int nb)
{
	int		result;

	result = 0;
	while (++result <= nb / 2)
	{
		if ((result * result) == nb)
			return (result);
	}
	return (0);
}
