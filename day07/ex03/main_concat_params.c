#include <stdio.h>

char	*ft_concat_params(int argc, char **argv);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_concat_params(argc, argv));
	return (0);
}
