#include <stdio.h>
#include <stdlib.h>

void	ft_sort_integer_table(int *tab, int size);

int		main(int argc, char **argv)
{
	int		tab[argc - 1];
	int		i;

	i = 0;
	while (i < (argc - 1))
	{
		tab[i] = atoi(argv[i + 1]);
		i++;
	}
	i = 0;
	while (i < (argc - 1))
	{
		printf("%d", tab[i++]);
		if (i <= argc - 2)
			printf(", ");
	}
	printf("\n");
	ft_sort_integer_table(tab, argc - 1);
	i = 0;
	while (i < (argc - 1))
	{
		printf("%d", tab[i++]);
		if (i <= argc - 2)
			printf(", ");
	}
	printf("\n");
	return (0);
}
