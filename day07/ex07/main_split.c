#include <stdio.h>

char	**ft_split(char *str, char *charset);

int		main(int argc, char **argv)
{
	char	**words;
	int		i;

	(void)argc;
	i = 0;
	words = ft_split(argv[1], argv[2]);
	while (words[i])
	{
		printf("%s\n", words[i]);
		i++;
	}
	return (0);
}
