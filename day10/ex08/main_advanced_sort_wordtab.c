#include <unistd.h>

void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));

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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_print_words_tables(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	(void)argc;
	char **tab;

	tab = &argv[1];
	ft_print_words_tables(tab);
	ft_putchar('\n');
	ft_advanced_sort_wordtab(tab, &ft_strcmp);
	ft_print_words_tables(tab);
	return (0);
}
