void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		sorted;
	char	*tmp;

	j = 0;
	while (tab[++j]);
	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 0;
		while (i < j - 1)
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				sorted = 0;
			}
			i++;
		}
		j--;
	}
}
