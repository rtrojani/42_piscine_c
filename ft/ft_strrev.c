int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i++] != '\0');
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		end;
	char	buf;

	i = 0;
	end = ft_strlen(str) - 2;
	while (i < end)
	{
		buf = str[end];
		str[end] = str[i];
		str[i] = buf;
		i++;
		end--;
	}
	return (str);
}
