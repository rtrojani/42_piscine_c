#include <stdio.h>
#include <stdlib.h>

int		ft_fibonacci(int index);

int		main(int argc, char** argv)
{
	argc = 1;
	printf("fibonacci[%d] = %d\n", atoi(argv[argc]), ft_fibonacci(atoi(argv[argc])));
	return (0);
}
