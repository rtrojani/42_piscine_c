#include <stdio.h>
#include <stdlib.h>

int		ft_sqrt(int nb);

int		main(int argc, char **argv)
{
	argc = 1;
	printf("Racine carrée de %d = %d\n", atoi(argv[argc]), ft_sqrt(atoi(argv[argc])));
	return(0);
}
