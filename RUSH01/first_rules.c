#include "tower.h"
extern int	g_NUMBERS_MISSING;

void	first_rules(t_rule tab_rule, t_field **tabuleiro, int size)
{
	rule_eyesight_one(tab_rule, tabuleiro, size);
	rule_vert_eyesight_four(tab_rule, tabuleiro, size);
	rule_hori_eyesight_four(tab_rule, tabuleiro, size);
	rule_eyesight_two_and_one(tab_rule, tabuleiro, size);
	rule_eyesight_two_and_three(tab_rule, tabuleiro, size);
}
