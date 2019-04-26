#include <stdio.h>
#include <stdlib.h>

int		ft_recursive_factorial(int nb);

int		main(int argc, char **argv)
{
	argc = 1;
	printf("%d! = %d\n", atoi(argv[argc]), ft_recursive_factorial(atoi(argv[argc])));
	return (0);
}
