#include <unistd.h>
#include <stdlib.h>
typedef struct s_field{
	int	number;
	int	prob[4];
	int	solvable;
	int	row;
	int	col;
}	t_field;
typedef struct s_rule{
	int	colup[4];
	int	coldown[4];
	int	rowleft[4];
	int	rowright[4];
}	t_rule;
void	first_rules(t_rule tab_rule, t_field **tabuleiro, int size);
void	update_tabuleiro(t_field **tab, int row, int col, int size);
void	first_rules_hori(void);
void	first_rules_vert(void);
void	check_by_prob(t_field **tabuleiro, int row, int col, int size);
void	try_solve(t_field **tabuleiro, int size);
void	check_vision_horizontal(t_field **tabuleiro, t_rule tab_rule, int size);
void	check_vision_vertical(t_field **tabuleiro, t_rule tab_rule, int size);
void	set_prob(t_field *number, int position, int size);
void	rush(int *argumentos, int size);
void	rule_eyesight_one(t_rule tab_rule, t_field **tabuleiro, int size);
void	rule_vert_eyesight_four(t_rule tab_rule, t_field **tabuleiro, int size);
void	rule_hori_eyesight_four(t_rule tab_rule, t_field **tabuleiro, int size);
void	rule_eyesight_two_and_one(t_rule tab_rule, t_field **tabuleiro, int size);
void	rule_eyesight_two_and_three(t_rule tab_rule, t_field **tabuleiro, int size);
int		succesfully_assigned(t_field *number, int value);
int		tower_saw(t_field *squares, int size);
int		nicialize_args(int *argumentos, char *string);
int		inicialize_args(int *argumentos, char *string);
