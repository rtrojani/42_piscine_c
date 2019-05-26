int		ft_atoi(char *str);
int		ft_putnbr(int nb);
int		ft_putchar(char c);

int		main(int argc, char **argv)
{
	(void)argc;
	ft_putnbr(ft_atoi(argv[1]));
	ft_putchar('\n');
	return (0);
}
