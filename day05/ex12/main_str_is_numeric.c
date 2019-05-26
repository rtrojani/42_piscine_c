#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[1]);
	printf("%d\n", ft_str_is_numeric(argv[1]));
	return (0);
}

