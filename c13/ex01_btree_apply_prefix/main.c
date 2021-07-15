#include "ft_btree.h"

void	ft_divide_by_two(void *nbr)
{
	*(int *)nbr = *(int *)nbr / 2;
}

void	ft_print_btree(void *nbr)
{
	printf("%d ", *((int *)nbr));
}

int	main(void)
{
	int	a;
	a = 500;
	t_btree *elem1 = btree_create_node(&a);
	a = 400;
	t_btree *elem2 = btree_create_node(&a);
	a = 300;
	t_btree *elem4 = btree_create_node(&a);
	a = 600;
	t_btree *elem3 = btree_create_node(&a);
	a = 700;
	t_btree *elem5 = btree_create_node(&a);

	elem1->left = elem2;
	elem1->right = elem3;
	elem2->left = elem4;
	elem3->right = elem5;
	btree_apply_prefix(elem1, &ft_print_btree);
	printf("\n");
	btree_apply_prefix(elem1, &ft_divide_by_two);
	btree_apply_prefix(elem1, &ft_print_btree);
	printf("\n");
	return (0);
}
