#include <stdlib.h>

int		is_separator(char c, char *charset)
{
	int		i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		word_count(char *str, char *charset)
{
	int		k;
	int		nb_words;

	if (str == NULL)
		return (0);
	k = 0;
	nb_words = 0;
	while (str[k])
	{
		while (is_separator(str[k], charset))
			k++;
		if (!is_separator(str[k], charset) && str[k])
			nb_words++;
		while (!is_separator(str[k], charset) && str[k])
			k++;
	}
	return (nb_words);
}

char	*word_alloc(char *words, char *str, char *charset)
{
	int		word_len;
	int		k;

	k = 0;
	word_len = 0;
	while (is_separator(str[k], charset))
		k++;
	while (!is_separator(str[k], charset) && str[k])
	{
		word_len++;
		k++;
	}
	words = (char*)malloc(sizeof(*words) * (word_len + 1));
	return (words);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	int		nb_words;
	char	**words;

	k = 0;
	nb_words = word_count(str, charset);
	words = (char**)malloc(sizeof(char*) * (nb_words + 1));
	i = 0;
	while (i < nb_words)
	{
		while (is_separator(str[k], charset))
			k++;
		words[i] = word_alloc(words[i], &str[k], charset);
		j = 0;
		while (!is_separator(str[k], charset) && str[k])
			words[i][j++] = str[k++];
		words[i][j] = '\0';
		k++;
		i++;
	}
	words[i] = 0;
	return (words);
}
