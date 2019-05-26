#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("La chaîne src : \"%s\"\nLa chaîne dest : \"%s\"\n", argv[1], argv[2]);
	printf("strncpy(dest, src, %d) = %s\nft_strncpy(dest, src, %d) = %s\n", atoi(argv[3]), strncpy(argv[1], argv[2], atoi(argv[3])), atoi(argv[3]), ft_strncpy(argv[1], argv[2], atoi(argv[3])));
	return (0);
}

