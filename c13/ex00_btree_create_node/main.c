#include "ft_btree.h"

t_btree *btree_create_node(void *item);

int	main(void)
{
	t_btree *node;
	int	n;

	n = 42;
	if ((node = btree_create_node(&n)) == NULL)
		return (1);
	printf("%p\n", node);
	printf("%d\n", node->nbr);
	free(node);
	if (node == NULL)
		printf("Node Succesfully Cleared\n");
}
