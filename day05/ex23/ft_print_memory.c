void	ft_putchar(char c);

void	putnbr_hexa(int c)
{
	char	*base;

	base = "0123456789abcdef";
	if (c <= 15)
		ft_putchar(base[c]);
	if (c > 15)
	{
		putnbr_hexa(c / 16);
		ft_putchar(base[c % 16]);
	}
}

void	display_hexa(char *char_addr, unsigned int size, unsigned int i)
{
	unsigned int	j;

	j = 0;
	while (j < 16 && i + j < size)
	{
		if (char_addr[i + j] < 16)
			ft_putchar('0');
		putnbr_hexa(char_addr[i + j]);
		if (j % 2 == 1)
			ft_putchar(' ');
		j++;
	}
	if (size - i - j < 16)
		while (j < 16)
		{
			ft_putchar(' ');
			ft_putchar(' ');
			if (j % 2 == 1)
				ft_putchar(' ');
			j++;
		}
	ft_putchar(' ');
}

void	display_str(char *char_addr, unsigned int size, unsigned int i) 
{
	unsigned int	j;

	j = 0;
	while (j < 16 && i + j < size)
	{
		if (char_addr[i + j] >= 32 && char_addr[i + j] < 127)
			ft_putchar(char_addr[i + j]);
		else
			ft_putchar('.');
		j++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long int	addr_int;
	char				*char_addr;
	unsigned int		i;

	i = 0;
	char_addr = (char*)addr;
	while (i < size)
	{
		addr_int = (unsigned long int)&char_addr[i];
		putnbr_hexa(addr_int);
		ft_putchar(':');
		ft_putchar(' ');
		display_hexa(char_addr, size, i);
		display_str(char_addr, size, i);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}
