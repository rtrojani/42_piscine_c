#include "ft_stock_par.h"

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[++i]);
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	len = 0;
	while (src[len++]);
	dest = (char*)malloc(sizeof(*dest) * len);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*ptr_tab;
	int			i;

	i = 0;
	ptr_tab = (t_stock_par*)malloc(sizeof(t_stock_par) * ac);
	if (!ptr_tab)
		return (NULL);
	while (i < ac)
	{
		ptr_tab[i].size_param = ft_strlen(av[i]);
		ptr_tab[i].str = av[i];
		ptr_tab[i].copy = ft_strdup(av[i]);
		ptr_tab[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	ptr_tab[i].str = 0;
	return(ptr_tab);
}
