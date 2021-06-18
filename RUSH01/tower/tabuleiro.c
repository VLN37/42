#include "tower.h"
#include <stdio.h>
extern int	g_NUMBERS_MISSING;

void	update_value_field(t_field *number, int size, t_field **tabuleiro)
{
	int	indice;
	int	value;

	indice = 0;
	while (indice < size)
	{
		if (number->prob[indice] != 0)
		{
			value = indice + 1;
			g_NUMBERS_MISSING--;
			number->number = value;
			number->solvable = -1;
			update_tabuleiro(tabuleiro, number->row, number->col, size);
			break ;
		}
		indice++;
	}
}

void	update_prob_field(t_field *number, int number_found, int size, t_field **tab)
{
	if (number->number == 0)
	{
		if (number->prob[number_found - 1] != 0)
		{
			number->solvable -= 1;
			number->prob[number_found - 1] = 0;
		}
		if (number->solvable <= 1)
			update_value_field(number, size, tab);
	}
}

void	update_tabuleiro(t_field **tab, int row, int col, int size)
{
	int	indice;
	int	number_found;

	indice = 0;
	number_found = tab[row][col].number;
	while (indice < size)
	{
		update_prob_field(&tab[indice][col], number_found, size, tab);
		indice++;
	}
	indice = 0;
	while (indice < size)
	{
		update_prob_field(&tab[row][indice], number_found, size, tab);
		indice++;
	}
}

void	try_solve(t_field **tabuleiro, int size)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < size)
	{
		while (col < size)
		{
			if (tabuleiro[row][col].number == 0 && tabuleiro[row][col].solvable <= 1)
			{
				update_value_field(&tabuleiro[row][col], size, tabuleiro);
			}
			col++;
		}
		col = 0;
		row++;
	}
}
