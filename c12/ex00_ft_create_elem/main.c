#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	elem1;
	t_list	elem2;
	t_list	elem3;
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
	ft_print_list(begin);
	free(begin);
	return (0);
}
