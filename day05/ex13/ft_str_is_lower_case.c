int		ft_str_is_lower_case(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z')) 
			return (0);
		i++;
	}
	return (1);
}
