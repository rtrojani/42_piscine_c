#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(int argc, char **argv)
{
	char	*src = argv[1];
	char	*ft_src = argv[1];
	char	dest[atoi(argv[2])];
	char	ft_dest[atoi(argv[2])];

	(void)argc;
	printf("   dest = %s\n   src = %s\n", dest, src);
	printf("   strcpy(   dest,    src, %ld) = %ld\n", sizeof(dest), strlcpy(dest, src, sizeof(dest)));
	printf("   dest = %s\n   src = %s\n\n", dest, src);

	printf("ft_dest = %s\nft_src = %s\n", ft_dest, ft_src);
	printf("ft_strcpy(ft_dest, ft_src, %ld) = %ld\n", sizeof(ft_dest), strlcpy(ft_dest, ft_src, sizeof(ft_dest)));
	printf("ft_dest = %s\nft_src = %s\n", ft_dest, ft_src);
	return (0);
} 
