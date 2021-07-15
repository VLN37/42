#include <stdio.h>
#include "ft_list.h"

//runs through the linked list, printing the relevant parameters
void	ft_print_list(t_list **begin_list)
{
	printf("%s\n", ((char *)(*begin_list)->data));
	while ((*begin_list)->next)
	{
		begin_list = &(*begin_list)->next;
		printf("%s\n", ((char *)(*begin_list)->data));
	}
}
