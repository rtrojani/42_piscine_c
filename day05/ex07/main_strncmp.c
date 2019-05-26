#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("s1 = %s\ns2 = %s\n", argv[1], argv[2]);
	printf("strncmp(s1, s2, %d) = %d\nft_strncmp(s1, s2, %d) = %d\n", atoi(argv[3]), strncmp(argv[1], argv[2], atoi(argv[3])), atoi(argv[3]), strncmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}
