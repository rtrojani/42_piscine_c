#include <stdlib.h>
#include <string.h>

void	*ft_print_memory(void *addr, unsigned int size);

int		main(int argc, char **argv)
{
	char *str;

	(void)argc;
	str = strdup(argv[1]);
	ft_print_memory(str, atoi(argv[2]));
	free(str);
	return (0);
}
