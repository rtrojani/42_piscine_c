#include <stdio.h>
#include <stdlib.h>
#include "ft_abs.h"

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ABS(atoi(argv[1])));
	return (0);
}

