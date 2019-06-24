#include <stdio.h>
#include "ft_list.h"

int		ft_list_size(t_list *begin_list);
void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
void	print_list(t_list *list);
t_list	*ft_create_elem(void *data);


int		main(int argc, char **argv)
{
	t_list	*list;

	(void)argc;
	list = ft_create_elem(argv[1]);
	ft_list_push_back(&list, argv[2]);
	ft_list_push_front(&list, argv[3]);
	print_list(list);
	printf("%d\n", ft_list_size(list));
	return (0);
}
