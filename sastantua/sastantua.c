void	ft_putchar(char c);

int		width(int i)
{
	if (i == 0)
		return (7);
	else
			return(width(i - 1) + 2 * (1
				+ (i + 3) + (i / 2 + i % 2)));
	
}

void	stair(int stair_i, int size)
{
	int		high;
	int		gap;
	int		i;
	int		j;

	i = 0;
	high = stair_i + 3;
	while (i < high)
	{
		j = 0;
		gap = (width(size - 1) - width(stair_i)) / 2;
		while (gap-- > 0)
			ft_putchar(' ');
		while (j < (high - 1 - i))
		{
			ft_putchar(' ');
			j++;
		}
		ft_putchar('/');
		while (j < width(stair_i) - high - 1 + i)
		{
			ft_putchar('*');
			j++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		i++;
	}
}

void	sastantua(int size)
{
	int		j;

	j = 0;
	while (j < size)
		stair(j++, size);
}
