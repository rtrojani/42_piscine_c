#include "ft_list.h"

t_list	*ft_create_elem(void *data);

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list		*current;

	current = *begin_list;
	while (current->next)
		current = current->next;
	current->next = ft_create_elem(data);
}
