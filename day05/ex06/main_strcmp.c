#include <stdio.h>
#include <string.h>

int		main(int argc, char **argv)
{
	(void)argc;
	printf("s1 = %s\n, s2 = %s\n", argv[1], argv[2]);
	printf("strcmp(s1, s2) = %d\nft_strcmp(s1, s2) = %d\n", strcmp(argv[1], argv[2]), strcmp(argv[1], argv[2]));
	return (0);
}
