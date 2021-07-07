#include "ft_list.h"

int	main(void)
{

	char *array[] = {"alright.", "be ", "is gonna ", "everything "};
	int	size = 4;
	t_list *ptr;
	ptr = ft_list_push_strs(size, array);
	ft_print_list(&ptr);

	return (0);
}
