#include "op.h"

void	do_op(int a, char *operator, int b);

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	do_op(ft_atoi(argv[1]), argv[2], ft_atoi(argv[3]));
	return (0);
}
