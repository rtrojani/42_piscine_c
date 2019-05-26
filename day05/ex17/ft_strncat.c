int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i++] != '\0');
	return (i);
}

char *ft_strncat(char *dest, char *src, int nb)
{
	int		i;

	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[ft_strlen(dest) + i] = src[i];
		i++;
	}
	return (dest);
}
