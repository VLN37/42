#include "ft_list.h"
#include <stdio.h>

//runs through the linked list, printing the relevant parameters
void	ft_print_list(t_list **begin_list)
{
	t_list **tmpptr = begin_list;
	printf("%s\n", ((char *)(*tmpptr)->data));
	while ((*tmpptr)->next)
	{
		tmpptr = &(*tmpptr)->next;
		printf("%s\n", ((char *)(*tmpptr)->data));
	}
}
