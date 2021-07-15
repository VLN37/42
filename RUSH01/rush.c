#include "tower.h"
int	g_NUMBERS_MISSING;

void	show_table(t_field **table)
{
	int		row;
	int		col;
	char	string;

	col = 0;
	row = 0;
	while (row <= 3)
	{
		while (col <= 3)
		{
			string = '0' + table[row][col].number;
			write(1, &string, 1);
			write(1, " ", 1);
			col++;
		}
		col = 0;
		write(1, "\n", 1);
		row++;
	}
}

void	set_game(t_field **table)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row <= 3)
	{
		while (col <= 3)
		{
			table[row][col].prob[0] = 1;
			table[row][col].prob[1] = 1;
			table[row][col].prob[2] = 1;
			table[row][col].prob[3] = 1;
			table[row][col].solvable = 4;
			table[row][col].number = 0;
			table[row][col].row = row;
			table[row][col].col = col;
			col++;
		}
		col = 0;
		row++;
	}
}

void	set_rules(t_rule *tab_rule, int *argumentos, int size)
{
	int	indice;
	int	indice2;

	indice2 = 0;
	indice = 1;
	while (indice <= 16)
	{
		if (indice >= 1 && indice <= 4)
			tab_rule->colup[indice2] = argumentos[indice - 1];
		if (indice >= 5 && indice <= 8)
			tab_rule->coldown[indice2] = argumentos[indice - 1];
		if (indice >= 9 && indice <= 12)
			tab_rule->rowleft[indice2] = argumentos[indice - 1];
		if (indice >= 14 && indice <= 16)
			tab_rule->rowright[indice2] = argumentos[indice - 1];
		indice++;
		indice2++;
		if (indice2 == 4)
		{
			indice2 = 0;
		}
	}
}

void	rush(int *argumentos, int size)
{
	t_field	**tabuleiro;
	t_rule	tab_rule;
	int		x;

	x = 0;
	g_NUMBERS_MISSING = size * size;
	tabuleiro = (t_field **) malloc(size * 8);
	while (x < size)
	{
		tabuleiro[x] = (t_field *) malloc(size * (4 * 8));
		x++;
	}
	set_rules(&tab_rule, argumentos, 4);
	set_game(tabuleiro);
	first_rules(tab_rule, tabuleiro, size);
	check_vision_horizontal(tabuleiro, tab_rule, size);
	check_vision_vertical(tabuleiro, tab_rule, size);
	while (g_NUMBERS_MISSING > 0)
		try_solve(tabuleiro, size);
	show_table(tabuleiro);
}
