#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <stdlib.h>

struct s_stock_par	*ft_param_to_tab(int ac, char **av);
char				**ft_split_whitespaces(char *str);
void				ft_show_tab(struct s_stock_par *par);

typedef struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;

#endif
