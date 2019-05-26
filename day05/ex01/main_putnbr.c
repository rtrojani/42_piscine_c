#include <stdlib.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	(void)argc;
	ft_putnbr(atoi(argv[1]));
	ft_putchar('\n');
	return (0);
}
