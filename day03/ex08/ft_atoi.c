int		ft_atoi(char *str)
{
	int		i;
	int		is_negative;
	int		result;

	i = 0;
	is_negative = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	if (str[i - 1] == '-')
		is_negative = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0') % 10;
		i++;
	}
	return (result * is_negative);
}
