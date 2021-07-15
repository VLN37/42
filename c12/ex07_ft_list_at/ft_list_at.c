#include "ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int	size;
	int	i;
	t_list *tempptr;

	tempptr = begin_list;
	size = 0;
	i = 0;
	size = ft_list_size(tempptr);
	if (nbr >= size)
		return(NULL);
	while (i < nbr)
	{
		tempptr = tempptr->next;
		i++;
	}
	return (tempptr);
}
