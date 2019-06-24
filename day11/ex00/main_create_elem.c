#include "ft_list.h"

void	print_list(t_list *list);
t_list	*ft_create_elem(void *data);

int		main(int argc, char **argv)
{
	t_list		*list;

	(void)argc;
	list = ft_create_elem(argv[1]);
	print_list(list);
	return (0);
}
