#include <stdio.h>

char	*ft_strrev(char *str);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[1]);
	printf("%s\n",ft_strrev(argv[1]));
	return (0);
}
