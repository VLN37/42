#include "ft_list.h"
#include <string.h>

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
t_list *ft_list_at(t_list *begin_list, unsigned int nbr);
t_list *ft_list_reverse(t_list **begin_list);

void	free_fct(void *data)
{
	free(data);
}

int	main(void)
{
	char *array[4];
	t_list *begin;
	// char *str1;
	// char *str2;
	// char *str3;

	array[0] = strdup("This ");
	array[1] = strdup("is the ");
	array[2] = strdup("reversed ");
	array[3] = strdup("array ");
	array[4] = strdup("of Sh4D0wS!");

	begin = ft_list_push_strs(5, array);
	ft_print_list(&begin);
	begin = ft_list_reverse(&begin);
	ft_print_list(&begin);
}

//why is the pointer still valid?

	// char *array[] = {"alright.", "be ", "is gonna ", "everything "};

	// void	(*f)(void *);
	// f = &free_fct;
	// t_list *ptr;
	// ptr = ft_list_push_strs(4, array);
