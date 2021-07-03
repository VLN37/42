#include "ft_list.h"

t_list *ft_create_elem(void *data)
{
	t_list	*tmp;

	tmp->data = data;
	tmp->next = 0;

	return (tmp);
}
