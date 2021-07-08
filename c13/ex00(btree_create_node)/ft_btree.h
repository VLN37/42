#ifndef FT_BTREE_H
# define FT_BTREE_H

#include <stdio.h>
#include <stdlib.h>

t_btree *btree_create_node(void *item);
typedef struct	s_btree
{
	int nbr;
	struct s_btree	*left;
	struct s_btree	*right;
}	t_btree;

#endif
