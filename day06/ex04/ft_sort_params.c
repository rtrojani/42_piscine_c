void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	print_params(int argc, char **argv)
{
	int		i;
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		sorted;
	char	*tmp;

	j = argc - 1;
	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 0;
		while (++i < j)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				sorted = 0;
			}
		}
		j--;
	}
	print_params(argc, argv);
	return (0);
}
