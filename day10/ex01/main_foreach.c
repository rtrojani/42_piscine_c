#include <stdlib.h>
#include "ft.h"

void	ft_foreach(int *tab, int length, void(*f)(int));

int		main(int argc, char **argv)
{
	int		*tab;
	int		i;

	tab = (int*)malloc(argc - 1);
	i = 0;
	while (i < argc - 1)
	{
		tab[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	ft_foreach(tab, argc - 1, &ft_putnbr);
	ft_putchar('\n');
	return (0);
}
