#ifndef FT_BTREE_H
# define FT_BTREE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct	s_btree
{
	int nbr;
	struct s_btree	*left;
	struct s_btree	*right;
}	t_btree;

t_btree *btree_create_node(void *item);
void btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void btree_apply_infix(t_btree *root, void (*applyf)(void *));
void btree_apply_suffix(t_btree *root, void (*applyf)(void *));

#endif
