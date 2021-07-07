#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

int	main(void)
{
	t_list *elem1;
	t_list **begin_list;

	elem1 = ft_create_elem("Padawan");
	begin_list = &elem1;
	elem1->next = 0;
	ft_list_push_front(begin_list, "small");
	ft_list_push_front(begin_list, "Don't Panic");
	ft_print_list(begin_list);
}
