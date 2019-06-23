unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int		i;
	int		len_src;

	i = 0;
	len_src = 0;
	while(++src[len_src]);
	while (src[i] && i < (int)(size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}
