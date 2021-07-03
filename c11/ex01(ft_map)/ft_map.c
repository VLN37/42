#include <stdlib.h>
#include <stdio.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
	int	*returnedarray;
	int	i;

	i = 0;
	returnedarray = (int *) malloc(sizeof(int) * length);
	while (i < length)
	{
		returnedarray[i] = (*f)(tab[i]);
		printf("pos %d = %d ", i, returnedarray[i]);
		i++;
	}
	printf("\n");
	return (returnedarray);
}
