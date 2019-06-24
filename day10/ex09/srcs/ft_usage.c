void	ft_putstr(char *c);

int		ft_usage(int a, int b)
{
	(void)a;
	(void)b;
	ft_putstr("error : only [ - + * / % ] are accepted.");
	return (0);
}
