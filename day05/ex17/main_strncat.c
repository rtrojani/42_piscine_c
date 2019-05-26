#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, int nb);

int		main(int argc, char **argv)
{
	char *dest1; 
	char *dest2; 
	char *src1; 
	char *src2; 

	(void)argc;
	dest1 = argv[1];
	dest2 = argv[1];
	src1 = argv[2];
	src2 = argv[2];
	printf("dest = %s\nsrc = %s\n", argv[1], argv[2]);
	printf("strcat(dest, src) = %s\nft_strcat(dest, src) = %s\n", strncat(dest1, src1, atoi(argv[3])), ft_strncat(dest2, src2, atoi(argv[3])));
	return (0);
}
