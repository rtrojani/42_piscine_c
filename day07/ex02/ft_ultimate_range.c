#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;

	if (max - min > 0)
	{
		i = 0;
		*range = (int*)malloc(sizeof(**range) * (max - min));
		while (i < max - min)
		{
			range[0][i] = i + min;
			i++;
		}
		return (max - min);
	}
	else
	{
		range = NULL;
		return (0);
	}
}
