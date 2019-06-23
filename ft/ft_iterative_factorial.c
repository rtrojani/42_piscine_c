int		ft_iterative_factorial(int nb)
{
	int		result;
	
	if (nb < 0 || nb > 12)
		return(0);
	if (nb == 0)
		return (1);
	result = 1;
	while (nb > 1)
	{
		result = nb * result;
		nb--;
	}
	return (result);
}
