#include "ft_list.h"
#include <string.h>

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *));

void	free_fct(void *data)
{
	free(data);
}

int	main(void)
{
	char *array[3];
	t_list *begin;
	// char *str1;
	// char *str2;
	// char *str3;

	array[2] = strdup("hello ");
	array[1] = strdup("guys ");
	array[0] = strdup("what's up?");

	begin = ft_list_push_strs(3, array);
	ft_print_list(&begin);
	printf("%p\n", begin);
	ft_list_clear(begin, &free_fct);
	printf("%p\n", begin);
}

//why is the pointer still valid?

	// char *array[] = {"alright.", "be ", "is gonna ", "everything "};

	// void	(*f)(void *);
	// f = &free_fct;
	// t_list *ptr;
	// ptr = ft_list_push_strs(4, array);
