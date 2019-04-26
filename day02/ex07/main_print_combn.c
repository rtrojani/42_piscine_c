#include <stdlib.h>

void	ft_putchar(char c);
void	ft_print_combn(int n);

int		main(int argc, char **argv)
{
	(void)argc;
	ft_print_combn(atoi(argv[1]));
	ft_putchar('\n');
	return (0);
}

