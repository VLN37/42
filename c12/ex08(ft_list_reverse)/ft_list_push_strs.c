#include "ft_list.h"

t_list *ft_find_last(t_list* ptr)
{
	while (ptr->next)
		ptr = ptr->next;
	return(ptr);
}

t_list *ft_list_push_strs(int size, char **strs)
{
	int	i;
	t_list *begin_list;
	t_list *ptr2;

	i = size - 1;
	begin_list = ft_create_elem(strs[i]);
	i--;
	ptr2 = begin_list;
	while ( i >= 0)
	{
		ptr2 = ft_find_last(ptr2);
		ptr2->next = ft_create_elem(strs[i]);
		ptr2 = begin_list;
		i--;
	}
	return(begin_list);
}
