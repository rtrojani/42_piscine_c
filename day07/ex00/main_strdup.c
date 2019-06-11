#include <stdio.h>

char	*ft_strdup(char *src);

int		main(int argc, char **argv)
{
	char *dest;

	(void)argc;
	dest = ft_strdup(argv[1]);
	printf("%s\n", dest);
	return (0);
}
