#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	if ((max - min) > 0)
	{
		tab = (int*)malloc(sizeof(*tab) * (max - min));
		i = 0;
		while (i < (max - min))
		{
			tab[i] = min + i;
			i++;
		}
			return (tab);
	}
	else
		return (NULL);
}
