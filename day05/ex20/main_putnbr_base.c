#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base);
void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	(void)argc;
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	ft_putchar('\n');
	return (0);
}
