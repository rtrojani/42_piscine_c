#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[1]);
	printf("%s\n", ft_strlowcase(argv[1]));
	return (0);
}
