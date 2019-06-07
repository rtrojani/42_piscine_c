void	ft_putstr_non_printable(char *str);
void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	(void)argc;
	ft_putstr_non_printable(argv[1]);
	ft_putchar('\n');
	return (0);
}
