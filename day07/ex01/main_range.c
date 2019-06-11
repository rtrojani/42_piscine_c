#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max);

int		main(int argc, char **argv)
{
	int		*tab;
	int		i;

	(void)argc;
	i = 0;
	tab = ft_range(atoi(argv[1]), atoi(argv[2]));
	while (i < (atoi(argv[2]) - atoi(argv[1])))
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
