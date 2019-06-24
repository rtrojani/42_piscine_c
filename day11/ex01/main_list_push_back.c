#include "ft_list.h"

void	print_list(t_list *list);
void		ft_list_push_back(t_list **begin_list, void *data);
t_list		*ft_create_elem(void *data);

int		main(int argc, char **argv)
{
	t_list	*list;

	(void)argc;
	list = ft_create_elem(argv[1]);
	print_list(list);
	ft_list_push_back(&list, argv[2]);
	print_list(list);
	return (0);
}
