#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[1]);
	printf("%s\n", ft_strupcase(argv[1]));
	return (0);
}
