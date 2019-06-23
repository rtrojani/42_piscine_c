int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i++] != '\0');
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[ft_strlen(dest) + i] = src[i];
		i++;
	}
	return (ft_strlen(dest));
}
