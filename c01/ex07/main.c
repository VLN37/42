#include<stdio.h>
void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	vec[5] = {1, 2, 3, 4, 5};
	int	vec2[6] = {1, 2, 3, 4, 5, 6};

	printf("Original array: %i, %i, %i, %i, %i]\n", vec[0],vec[1], vec[2], vec[3], vec[4]);
	ft_rev_int_tab(vec, 5);
	printf("Inverted array: [%i, %i, %i, %i, %i]\n", vec[0], vec[1], vec[2], vec[3], vec[4]);
	printf("Original array: %i, %i, %i, %i, %i, %i]\n", vec2[0],vec2[1], vec2[2], vec2[3], vec2[4], vec2[5]);
	ft_rev_int_tab(vec2, 6);
	printf("Inverted array: [%i, %i, %i, %i, %i, %i]\n", vec2[0], vec2[1], vec2[2], vec2[3], vec2[4], vec2[5]);
	return (0);
}
