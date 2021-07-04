#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data);
void ft_list_push_front(t_list **begin_list, void *data);


//runs through the linked list, printing the relevant parameters
void	aff_list(t_list **begin)
{
	printf("%s\n", (*begin)->data);
	while ((*begin)->next)
	{
		begin = &(*begin)->next;
		printf("%s\n", (*begin)->data);
	}
}

int	main(void)
{
	//t_list **begin = (t_list*)malloc(sizeof(t_list) * 5);

	t_list* elem1;
	t_list **begin;

	elem1 = ft_create_elem("Padawan");
	begin = &elem1;
	elem1->next = 0;
	ft_list_push_front(begin, "Don't Panic");
	printf("%s\n", (*begin)->data);
	aff_list(begin);
}
