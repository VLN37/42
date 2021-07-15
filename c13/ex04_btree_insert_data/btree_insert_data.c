#include "ft_btree.h"

void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree	*temp = (*root);

	if ((*root) == 0)
	{
		(*root) = (t_btree *)btree_create_node(item);
		return ;
	}
	while (temp)
	{
		if (cmpf(item, (void *)&temp->nbr))
		{
			if (temp->right)
				temp = temp->right;
			else
			{
				temp->right = btree_create_node(item);
				break ;
			}
		}
		else
		{
			if (temp->left)
				temp = temp->left;
			else
			{
				temp->left = btree_create_node(item);
				break ;
			}
		}
	}
}

// 		500
// 250				1000
// 						  node
