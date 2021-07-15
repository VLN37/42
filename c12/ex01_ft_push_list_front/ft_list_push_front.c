#include "ft_list.h"
#include <stdlib.h>

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *tmp;

	if (begin_list == 0)
		return ;
	tmp = (t_list *)malloc(sizeof(t_list));
	tmp->data = data;
	tmp->next = *begin_list;
	*begin_list = tmp;
	return ;
}
