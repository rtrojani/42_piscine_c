#include <stdlib.h>

int		init_len_arg(int argc, char **argv)
{
	int		len_arg;
	int		i;

	len_arg = 0;
	i = 1;
	while (i < argc)
	{
		while (argv[i][len_arg++]);
		i++;
	}
	return (len_arg);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 1;
	k = 0;
	str = (char*)malloc(sizeof(*str) * init_len_arg(argc, argv));
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			str[k] = argv[i][j];
			j++,
			k++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	return (str);
}
