#include <unistd.h>
#include "ft_list.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr((char*)list->data);
		write(1, "\n", 1);
		list = list->next;
	}
}
