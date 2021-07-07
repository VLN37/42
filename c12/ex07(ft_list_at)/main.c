#include "ft_list.h"
#include <string.h>

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
t_list *ft_list_at(t_list *begin_list, unsigned int nbr);


void	free_fct(void *data)
{
	free(data);
}

int	main(void)
{
	char *array[2];
	t_list *begin;
	t_list *returned;
	// char *str1;
	// char *str2;
	// char *str3;

	array[2] = strdup("hello ");
	array[1] = strdup("guys ");
	array[0] = strdup("what's up?");

	begin = ft_list_push_strs(3, array);
	ft_print_list(&begin);
	returned = ft_list_at(begin, 2);
	if (returned)
		printf("Returned data: %s\n", (char *)returned->data);
	else
		printf("Pointer is NULL\n");
	return (0);
}

//why is the pointer still valid?

	// char *array[] = {"alright.", "be ", "is gonna ", "everything "};

	// void	(*f)(void *);
	// f = &free_fct;
	// t_list *ptr;
	// ptr = ft_list_push_strs(4, array);
