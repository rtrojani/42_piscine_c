#include <stdlib.h>
#include "ft.h"

int		ft_is_sort(int *tab, int length, int(*f)(int, int));

int		diff(int a, int b)
{
	return(a - b);
}

int		main(int argc, char **argv)
{
	int		*tab;
	int		i;

	i = 0;
	tab = (int*)malloc(sizeof(*tab) * argc - 1);
	while(i < argc - 1)
	{
		tab[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	ft_putnbr(ft_is_sort(tab, argc - 1, &diff));
	ft_putchar('\n');
	return (0);
}
