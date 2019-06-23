#include "ft.h"

int		ft_count_if(char **tab, int(*f)(char*));

int		main(int argc, char **argv)
{
	(void)argc;
	ft_putnbr(ft_count_if(&argv[1], &ft_str_is_upper_case));
	ft_putchar('\n');
	return (0);
}
