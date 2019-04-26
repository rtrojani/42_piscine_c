#include <stdio.h>
#include <stdlib.h>

int		ft_find_next_prime(int nb);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("Le prochain nombre premier après %d est %d.\n", atoi(argv[1]), ft_find_next_prime(atoi(argv[1])));
	return (0);
}
