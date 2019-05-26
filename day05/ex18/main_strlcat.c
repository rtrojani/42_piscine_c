#include <string.h>
#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

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
	printf("strlcat(dest, src, %s) = %ld, dest = %s, src = %s\n", argv[3], strlcat(dest1, src1, atoi(argv[3])), dest1, src1);
	printf("ft_strlcat(dest, src, %s) = %d, dest = %s, src = %s\n", argv[3], ft_strlcat(dest2, src2, atoi(argv[3])), dest2, src2);
	return (0);
}
