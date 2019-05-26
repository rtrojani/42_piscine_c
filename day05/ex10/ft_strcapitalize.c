int		check_case(char *str, int i)
{
	if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z') 
		|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z') 
		|| (str[i - 1] >= '0' && str[i - 1] <= '9'))
		&& !((str[i + 1] >= 'a' && str[i + 1] <= 'z') 
		|| (str[i + 1] >= 'A' && str[i + 1] <= 'Z') 
		|| (str[i + 1] >= '0' && str[i + 1] <= '9')))
		return (0);
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z') 
			|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z') 
			|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
			return (1);
	}
	if (str[i] >= 'A' && str[i] <= 'Z')
		if ((str[i - 1] >= 'a' && str[i - 1] <= 'z') 
			|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z') 
			|| (str[i - 1] >= '0' && str[i - 1] <= '9'))
			return (2);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (check_case(str, i) == 1)
			str[i] -= 32;
		else if (check_case(str, i) == 2)
			str[i] += 32;
		i++;
	}
	return (str);
}
