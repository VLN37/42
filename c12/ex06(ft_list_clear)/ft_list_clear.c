#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *previous;
	t_list *current;
	printf("%p\n", begin_list);
	current = begin_list;
	while((previous = current) != 0)
	{
		current = current->next;
		free_fct(previous->data);
		free(previous);
	}
	return ;
}
