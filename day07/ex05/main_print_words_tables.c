char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **str);

int		main(int argc, char **argv)
{
	(void)argc;
	ft_print_words_tables(ft_split_whitespaces(argv[1]));
	return (0);
}
