#include "tower.h"
extern int	g_NUMBERS_MISSING;

int	succesfully_assigned(t_field *number, int value)
{
	if (number->number == 0)
	{
		number->number = value;
		number->solvable = -1;
		g_NUMBERS_MISSING--;
		return (1);
	}
	return (0);
}

int	tower_saw(t_field *squares, int size)
{
	int	seen;
	int	indice;
	int	last_number;
	int	current_number;

	last_number = 0;
	indice = 0;
	seen = 0;
	while (indice < size)
	{
		current_number = squares[indice].number;
		if (current_number > last_number)
		{
			seen++;
			last_number = current_number;
		}
		indice++;
	}
	return (seen);
}

void	set_prob(t_field *number, int position, int size)
{
	int	indice;

	indice = 0;
	if (position == 1)
	{
		while (indice < size)
		{
			if (number->prob[indice] == 1)
			{
				number -> number = indice + 1;
				break ;
			}
			indice++;
		}
	}
	indice = size - 1;
	if (position == 2)
	{
		while (indice >= 0)
		{
			if (number -> prob[indice] == 1)
			{
				number -> number = indice + 1;
				break ;
			}
			indice--;
		}
	}
}
