#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("La chaîne src : \"%s\"\nLa chaîne dest : \"%s\"\n", argv[1], argv[2]);
	printf("strcpy(dest, src) = %s\nft_strcpy(dest, src) = %s\n", strcpy(argv[1], argv[2]), ft_strcpy(argv[1], argv[2]));
	return (0);
}

