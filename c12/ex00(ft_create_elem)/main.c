#include "ft_list.h"
#include <stdio.h>

t_list *ft_create_elem(void *data);

//runs through the linked list, printing the relevant parameters
void	aff_list(t_list *begin)
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

	elem1.data = "hello";
	elem2.data = "buddy";
	elem3.data = "how r u";
	begin = ft_create_elem("doing?");
	aff_list(begin);
	return (0);
}
