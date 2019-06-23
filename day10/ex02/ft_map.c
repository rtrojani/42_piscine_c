#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int		i;
	int		*tab_out;

	i = 0;
	tab_out = (int*)malloc(sizeof(tab_out) * length);
	if (!tab_out)
		return (NULL);
	while (i < length)
	{
		tab_out[i] = f(tab[i]);
		i++;
	}
	return (tab_out);
}
