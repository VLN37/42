#include "ft_list.h"
#include <stdio.h>

//runs through the linked list, printing the relevant parameters
void	ft_print_list(t_list *begin)
{
	while (begin)
	{
		printf("%s\n", (char *)begin->data);
		begin = begin->next;
	}
}
