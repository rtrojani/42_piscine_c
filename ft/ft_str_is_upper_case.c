int		ft_str_is_upper_case(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z')) 
			return (0);
		i++;
	}
	return (1);
}
