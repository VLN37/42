#include "tower.h"
extern int	g_NUMBERS_MISSING;

void	verify_t_n(t_field *number, t_field *next_number, int size, t_field **tab, t_rule tab_rule)

{
	if (number->number == 0 && next_number->number == 0)
		if (number->solvable <= 2 && next_number->solvable <= 2)
		{
			g_NUMBERS_MISSING--;
			g_NUMBERS_MISSING--;
			set_prob(number, 1, size);
			set_prob(next_number, 2, size);
			if (tab_rule.rowleft[number->row] == tower_saw(tab[number->row], size))
			{
				number->solvable = -1;
				next_number->solvable = -1;
				update_tabuleiro(tab, number->row, number->col, size);
				update_tabuleiro(tab, next_number->row, next_number->col, size);
			}
			else
			{
				set_prob(next_number, 1, size);
				set_prob(number, 2, size);
				update_tabuleiro(tab, number->row, number->col, size);
				update_tabuleiro(tab, next_number->row, next_number->col, size);
				number->solvable = -1;
				next_number->solvable = -1;
			}
		}
}

int	standard_two_numbers(int standard, t_field *number, t_field **tab)
{
	if (standard == 0)
	{
		if (number->col == 0)
			if (tab[number->row][2].number == 0 || tab[number->row][3].number == 0)
			{
				return (0);
			}
		if (number->col == 2)
			if (tab[number->row][0].number == 0 || tab[number->row][1].number == 0)
			{
				return (0);
			}
		if (number->col != 0 && number->col != 2)
			return (0);
		return (1);
	}
	if (number->row == 0)
		if (tab[2][number->col].number == 0 || tab[3][number->col].number == 0)
			return (0);
	if (number->row == 2)
		if (tab[0][number->col].number == 0 || tab[1][number->col].number == 0)
			return (0);
	if (number->row != 0 && number->row != 2)
		return (0);
	return (1);
}

void	check_vision_horizontal(t_field **tabuleiro, t_rule tab_rule, int size)
{
	int		col;
	int		row;
	t_field	*number;
	t_field	*next_number;

	col = 0;
	row = 0;
	while (row < size)
	{
		while (col < size)
		{
			number = &tabuleiro[row][col];
			next_number = &tabuleiro[row][col + 1];
			if (standard_two_numbers(0, number, tabuleiro))
				verify_t_n(number, next_number, size, tabuleiro, tab_rule);
			col++;
		}
		col = 0;
		row++;
	}
}

void	check_vision_vertical(t_field **tabuleiro, t_rule tab_rule, int size)
{
	int		col;
	int		row;
	t_field	*number;
	t_field	*next_number;

	col = 0;
	row = 0;
	while (col < size)
	{
		while (row < size)
		{
			number = &tabuleiro[row][col];
			next_number = &tabuleiro[row + 1][col];
			if (standard_two_numbers(1, number, tabuleiro))
				verify_t_n(number, next_number, size, tabuleiro, tab_rule);
			row++;
		}
		row = 0;
		col++;
	}
}
