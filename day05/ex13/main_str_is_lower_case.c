#include <stdio.h>

int		ft_str_is_lower_case(char *str);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[1]);
	printf("%d\n", ft_str_is_lower_case(argv[1]));
	return (0);
}

