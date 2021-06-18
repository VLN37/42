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
		while (i < size)
		{
			if (tab[i] < tab[i + 1])
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
	while (tab[i] != '\0')
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int i;

	i = 10;
	int array[10];
	while (i != 0)
	{
		array[i - 1] = i;
		i--;
	}
	while (array[i] != '\0')
	{
		printf("%d ", array[i]);
		i++;
	}
		printf("\n");
	ft_sort_int_tab(array, 11);
	return (0);
}