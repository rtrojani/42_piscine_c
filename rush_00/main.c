void	ft_putchar(char c);
void	colle(int x, int y);

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "Error\n",6)
	else
		colle(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
