int		ft_atoi(char *str)
{
	int		i;
	int		result;
	int		is_negative;

	i = 0;
	result = 0;
	is_negative = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i - 1] == '-')
		is_negative = -1;
	while (str[i] >= (0 + '0') && str[i] <= (9 + '0'))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (is_negative * result);
}
