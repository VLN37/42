#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data);
void ft_list_push_front(t_list **begin_list, void *data);


//runs through the linked list, printing the relevant parameters
void	print_list(t_list **begin_list)
{
	printf("%s\n", (*begin_list)->data);
	while ((*begin_list)->next)
	{
		begin_list = &(*begin_list)->next;
		printf("%s\n", (*begin_list)->data);
	}
}

int	main(void)
{
	//t_list **begin_list = (t_list*)malloc(sizeof(t_list) * 5);

	t_list *elem1;
	t_list **begin_list;

	elem1 = ft_create_elem("Padawan");
	begin_list = &elem1;
	elem1->next = 0;
	ft_list_push_front(begin_list, "small");
	ft_list_push_front(begin_list, "Don't Panic");
	print_list(begin_list);
}
