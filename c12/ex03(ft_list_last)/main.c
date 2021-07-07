#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	i;
	int	argc;
	t_list **begin_list;
	t_list *begin;
	t_list *last;
	char *array[] = {"hello", "to all", "my dear", "friends", "at 42"};
	i = 0;
	argc = 0;
	while (array[argc])
		argc++;
	printf("%d\n", argc);
	begin = ft_create_elem("start");
	begin_list = &begin;
	//which condition do i use here not to segfault
	while (i < argc - 1)
	{
		ft_list_push_front(begin_list, array[i]);
		i++;
	}
	last = ft_list_last(begin);
	printf("Last string should be 'start' and is:\n%s\n", (char *)last->data);
	return (0);
}
