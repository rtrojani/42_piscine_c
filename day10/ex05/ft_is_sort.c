int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;

	if (length < 2)
		return (1);
	i = 0;
	if (f(tab[i], tab[i + 1]) > 0)
	{
		i++;
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
			i++;
		}
	}
	else
	{
		i++;
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	return (1);
}
