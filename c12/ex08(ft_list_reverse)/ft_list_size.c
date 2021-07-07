#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int	i;
	t_list *ptr = begin_list;

	if (begin_list == 0)
		return (0);
	i = 0;
	while(ptr->next)
	{
		i++;
		ptr = ptr->next;
	}
	if(!ptr->next)
		i++;
	return (i);
}
