#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *ft_create_elem(void *data);

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;

	if (begin_list == 0)
		return ;
	tmp = *begin_list;
	while(tmp->next)
		tmp = tmp->next;
	tmp->next = ft_create_elem(data);
	tmp = tmp->next;
	return ;
}
