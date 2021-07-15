#include<stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int	buffer;
	int	i;
	int	y;

	i = 0;
	y = 0;
	buffer = 0;
	while (y < size)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				buffer = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = buffer;
			}
			i++;
		}
	i = 0;
	y++;
	}
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

