#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	init_tab(int *tab, int nb)
{
	int i;

	i = 0;
	while (i < nb)
	{
		tab[i] = i;
		i++;
	}
}

void	print_tab(int *tab, int nb)
{
	int i;

	i = 0;
	while (i < nb)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	if	(tab[0] < (10 - nb))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int tab[n];
	int value;
	int i = 1;
	int i_last;

	init_tab(tab, n);
	i_last = n - 1;
	value = tab[i_last];
	while (value <= 9 && tab[0] <= 10 - n)
	{
		tab[i_last] = value;
		print_tab(tab, n);
		if (value == 9 && n > 1)
		{
			tab[i_last - i]++;
			value = tab[i_last - i];
			if (n > 2 && tab[i_last - i] == 9 - i)
				i++;
			if (i == n)
			{
				i = 0;
				while (i < n)
				{
					ft_putchar(10 - i_last + '0');
					i++;
					i_last--;
				}
			}
		}
		value++;
	}
}
/*
void    ft_print_combn(int nb)
{
	int tab[nb];
	int i;
	int max;
	int curse = 1;
	int ncurse = 1;
	int list;

	max = 9;
	init_tab(tab, nb);
	i = tab[nb - curse];
	list = nb - 1;
	while (i <= max && tab[0] <= 10 - nb)
	{
		tab[list] = i;
		print_tab(tab, nb); //j'affiche 012 013 014 etc..
		if (i == max && nb > 1)
		{
			tab[list - curse]++;
			i = tab[list - curse];
			printf("\ni = %d\n", i);
			if (nb > 2)
			{
				tab[list - (curse + ncurse)]++;
				tab[list - curse] = tab[list - (curse + ncurse)] + 1;
				if ()
					ncurse++;
			}
		}
		i++;
	}
}*/

int		main(int argc, char **argv)
{
	argc = 1;
	ft_print_combn(atoi(argv[argc]));
	ft_putchar('\n');

	return (0);
}
