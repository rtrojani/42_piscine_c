#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

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
	printf("strcat(dest, src) = %s\nft_strcat(dest, src) = %s\n", strcat(dest1, src1), ft_strcat(dest2, src2));
	return (0);
}
