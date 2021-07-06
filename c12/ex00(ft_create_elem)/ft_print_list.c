#include "ft_list.h"
#include <stdio.h>

//runs through the linked list, printing the relevant parameters
void	print_list(t_list *begin)
{
	char *ptr;
	while (begin)
	{
		//ptr = begin->data;
		printf("%s\n", (char *)begin->data);
		begin = begin->next;
	}
}
