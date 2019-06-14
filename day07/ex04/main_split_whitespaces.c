#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(int argc, char **argv)
{
	char	**words;
	int		i;

	(void)argc;
	i = 0;
	words = ft_split_whitespaces(argv[1]);
	while (words[i])
	{
		printf("%s\n", words[i]);
		i++;
	}
	return (0);
}
