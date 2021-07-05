#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list *ft_create_elem(void *data);

//runs through the linked list, printing the relevant parameters
void	print_list(t_list *begin)
{
	while (begin)
	{
		printf("%s\n", begin->data);
		begin = begin->next;
	}
}

int	main(void)
{
	t_list	elem1;
	t_list	elem2;
	t_list	elem3;
	t_list	elem4;
	t_list	*begin;

	begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = 0;

	elem1.data = "buddy";
	elem2.data = "how r u";
	elem3.data = "doing?";
	begin = ft_create_elem("hello");
	begin->next = &elem1;
	print_list(begin);
	free(begin);
	return (0);
}
