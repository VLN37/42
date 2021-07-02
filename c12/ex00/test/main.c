#include "ft_list.h"
#include <stdio.h>

t_list *ft_create_elem(void *data);

//runs through the linked list, printing the relevant parameters
void	aff_list(t_list *begin)
{
	while (begin)
	{
		printf("%d\n", begin->i);
		begin = begin->next;
	}
}

int	main(void);
{
	t_list	elem1;
	t_list	elem2;
	t_list	elem3;
	t_list	*begin;

	begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = 0;

	elem1.nbr = 21;
	elem2.nbr = 42;
	elem3.nbr = 84;
	elem4 = ft_create_elem(data);
}
