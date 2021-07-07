#include "ft_list.h"

// int ft_list_size(t_list *begin_list)
// {
// 	int	i;
// 	t_list *ptr = begin_list;

// 	if (begin_list == 0)
// 		return (0);
// 	i = 0;
// 	while(ptr->next)
// 	{
// 		i++;
// 		ptr = ptr->next;
// 	}
// 	if(!ptr->next)
// 		i++;
// 	return (i);
// }

// t_list *ft_get_location(t_list* begin, int	counter)
// {
// 	int	i;

// 	i = 0;
// 	while (i != counter)
// 	{
// 		begin = begin->next;
// 		i++;
// 	}
// 	return (begin);
// }

t_list *ft_list_reverse(t_list **begin_list)
{
	t_list *prev;
	t_list **curr;
	t_list *next;

	prev = (void *)0;
	curr = begin_list;

	while ((*curr))
	{
		next = (*curr)->next;
		(*curr)->next = prev;
		prev = (*curr);
		(*curr) = next;
	}
	(*curr) = prev;
	return (*curr);
}
