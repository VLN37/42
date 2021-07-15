#include "ft_btree.h"

void	ft_divide_by_two(void *nbr)
{
	*(int *)nbr = *(int *)nbr / 2;
}

void	ft_print_btree(void *nbr)
{
	printf("%d ", *((int *)nbr));
}

int	ft_is_higher(void *a, void *b)
{
	if (*((int *)a) >= *((int *)b))
		return (1);
	return (0);
}

int	main(void)
{
	t_btree **root;
	int	a;
	int	(*cmpf)(void *, void *);
	cmpf = &ft_is_higher;
	a = 500;
	t_btree *elem1 = btree_create_node(&a);
	a = 400;
	t_btree *elem2 = btree_create_node(&a);
	a = 300;
	t_btree *elem4 = btree_create_node(&a);
	a = 600;
	t_btree *elem3 = btree_create_node(&a);
	a = 800;
	t_btree *elem5 = btree_create_node(&a);


	root = &elem1;
	elem1->left = elem2;
	elem1->right = elem3;
	elem2->left = elem4;
	elem3->right = elem5;

	btree_apply_infix(elem1, &ft_print_btree);
	printf("\n");
	//btree_apply_infix(elem1, &ft_divide_by_two);
	elem1 = 0;
	a = 250;
	btree_insert_data(&elem1, &a, &ft_is_higher);
	btree_insert_data(&elem1, &a, &ft_is_higher);
	a = 550;
	btree_insert_data(&elem1, &a, &ft_is_higher);
	btree_insert_data(&elem1, &a, &ft_is_higher);
	a = 1236;
	btree_insert_data(&elem1, &a, &ft_is_higher);
	a = 545;
	btree_insert_data(&elem1, &a, &ft_is_higher);
	a = 11231;
	btree_insert_data(&elem1, &a, &ft_is_higher);
	a = 344;
	btree_insert_data(&elem1, &a, &ft_is_higher);
	printf("estou saindo\n");
	btree_apply_infix(elem1, &ft_print_btree);
	printf("\n");
	return (0);
}
