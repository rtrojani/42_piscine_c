#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("str = \"%s\"\nto_find = \"%s\"\n", argv[1], argv[2]);
	printf("ft_strstr(str, to_find) = %s\n", ft_strstr(argv[1], argv[2]));
	return (0);
}
