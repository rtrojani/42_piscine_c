#include <stdlib.h>
#include "ft.h"

int		*ft_map(int *tab, int length, int(*f)(int));

int		main(int argc, char **argv)
{
	int		*tab;
	int		i;
	int		*tab_out;

	i = 0;
	tab = (int*)malloc(sizeof(tab) * (argc - 1));
	if (!tab)
		return (0);
	while (i < argc - 1)
	{
		tab[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	i = 0;
	tab_out = ft_map(tab, argc - 1, &ft_fibonacci);
	while (i < argc - 1)
	{
		ft_putnbr(tab[i]);
		ft_putstr(" : ");
		ft_putnbr(tab_out[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
