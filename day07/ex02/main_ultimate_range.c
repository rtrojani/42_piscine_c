#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(int argc, char **argv)
{
	int		i;
	int		*range;

	(void)argc;
	range = NULL;
	printf("ft_ultimate_range = %d\n", ft_ultimate_range(&range, atoi(argv[1]), atoi(argv[2])));
	i = 0;
	while (i < atoi(argv[2]) - atoi(argv[1]))
	{
		printf("range[%d] = %d\n", i, range[i]);
		i++;
	}
	return (0);
}
