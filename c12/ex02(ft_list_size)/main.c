#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	i;
	int	argc;
	t_list **begin_list;
	t_list *begin;
	char *array[] = {"hello", "to all", "my dear", "friends", "at 42"};
	i = 0;
	argc = 0;
	while (array[i])
	{
		argc++;
		i++;
	}
	i = 0;
	printf("%d\n", argc);
	begin = ft_create_elem("start");
	begin_list = &begin;
	//which condition do i use here not to segfault
	while (i < 5)
	{
		ft_list_push_front(begin_list, array[i]);
		i++;
	}
	printf("Linked list size should be 6 and is: %d\n", ft_list_size(*begin_list));
	ft_print_list(begin_list);
	return (0);
}
