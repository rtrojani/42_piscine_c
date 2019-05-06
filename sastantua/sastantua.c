void	ft_putchar(char c);

int		width(int i)
{
	if (i == 0)
		return (7);
	else
		return (width(i - 1) + 2 * (1
			+ (i + 3) + (i / 2 + i % 2)));

}

void	put_ground_floor(int i, int j, int high, int size)
{
	int		door_size;

	door_size = size + 1 - size % 2;
	ft_putchar('/');
	while (j < width(size) - high - 1 + i)
	{
		if (((i == (high - (door_size / 2) - 1)) 
			&& (j == ((width(size) / 2) + (door_size / 2 + 1) - 3))) 
			&& (size >= 4))
			ft_putchar('$');
		else if ((i > (high - door_size - 1)) 
			&& ((j > ((width(size) / 2) - (door_size / 2 + 1) - 1)) 
			&& ((j < (width(size) / 2) + (door_size / 2 + 1) - 1))))
			ft_putchar('|');
		else
			ft_putchar('*');
		j++;
	}
	ft_putchar('\\');
}

void	ground_floor(int size)
{
	int		high;
	int		i;
	int		j;

	i = 0;
	high = size + 3;
	while (i < high)
	{
		j = 0;
		while (j < (high - 1 - i))
		{
			ft_putchar(' ');
			j++;
		}
		put_ground_floor(i, j, high, size);
				ft_putchar('\n');
		i++;
	}
}

void	put_floor(int floor_i, int size)
{
	int		high;
	int		gap;
	int		i;
	int		j;

	i = 0;
	high = floor_i + 3;
	while (i < high)
	{
		j = 0;
		gap = (width(size - 1) - width(floor_i)) / 2;
		while (gap-- > 0)
			ft_putchar(' ');
		while (j++ < (high - 1 - i))
			ft_putchar(' ');
		ft_putchar('/');
		while (j < width(floor_i) - high + i)
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
	while (j < (size - 1))
		put_floor(j++, size);
	ground_floor(size - 1);
}
