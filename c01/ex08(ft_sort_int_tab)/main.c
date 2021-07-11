#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int i;
	int	j;

	i = 9;
	j = 0;
	int array[10];
	while (j < 10)
	{
		array[j] = i;
		j++;
		i--;
	}
	i = 0;
	while (i < 10)
	{
		printf("%d ", array[i]);
		i++;
	}
		printf("\n");
	ft_sort_int_tab(array, 10);
	return (0);
}
