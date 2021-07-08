#include "ft_btree.h"

void btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	applyf((void *)&root->nbr);
	if (root->left)
		btree_apply_prefix(root->left, applyf);
	if (root->right)
		btree_apply_prefix(root->right, applyf);
}
