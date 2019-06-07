void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[++i]);
	return (i);
}

int		check_str(char *str, char *base)
{
	int		i;
	int		j;

	if (!str[0])
		return (0);
	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i])
	{
		j = 0;
		while (str[i] != base[j])
		{
			j++;
			if (!base[j])
				return (0);
		}
		i++;
	}
	return (1);
}

int		check_error(char *str, char *base)
{
	int		i;
	int		j;

	if (!check_str(str, base))
		return (0);
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

int		base_index(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i] != c)
		i++;
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		result;
	int		is_negative;

	if (!check_error(str, base))
		return (0);
	i = 0;
	result = 0;
	is_negative = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i - 1] == '-')
		is_negative = -1;
	while (base_index(str[i], base) >= 0 
			&& base_index(str[i], base) < ft_strlen(base))
	{
		result = result * ft_strlen(base) + base_index(str[i], base);
		i++;
	}
	return (is_negative * result);
}

