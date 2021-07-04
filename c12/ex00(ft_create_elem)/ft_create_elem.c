#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list *ft_create_elem(void *data)
{
	t_list	*tmp;
	char *str;

	tmp = (t_list *)malloc(sizeof(t_list));
	tmp->data = (char *) data;
	tmp->next = 0;
	return (tmp);
}
