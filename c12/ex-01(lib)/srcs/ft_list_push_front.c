#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *tmp;
	char *str;

	tmp = (t_list *)malloc(sizeof(t_list));
	tmp->data = (char *)data;
	tmp->next = *begin_list;
	*begin_list = tmp;
	return ;
}
