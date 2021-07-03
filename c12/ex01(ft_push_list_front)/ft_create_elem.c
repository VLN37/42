#include "ft_list.h"

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while(str[i])
// 		i++;
// 	return (i);
// }

t_list *ft_create_elem(void *data)
{
	t_list	tmp;
	t_list	*ptr;

	ptr = &tmp;
	char * str = (char *)data;

	// tmp->data = (char *)malloc(sizeof(str) * ft_strlen(str));
	tmp.data = str;
	tmp.next = 0;

	return (ptr);
}
