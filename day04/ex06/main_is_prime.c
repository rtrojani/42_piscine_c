#include <stdio.h>
#include <stdlib.h>

int		ft_is_prime(int nb);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%d est premier ? %d\n", atoi(argv[1]), ft_is_prime(atoi(argv[1])));
	return (0);
}
