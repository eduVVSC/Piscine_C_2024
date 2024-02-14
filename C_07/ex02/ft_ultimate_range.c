/*
	Exercise 01 : ft_range

	. Create a function ft_range which returns an array ofints. This int array should
	contain all values between min and max.
	. Min included - max excluded.
	. Here’s how it should be prototyped:
			int	ft_ultimate_range(int **range, int min, int max)
	. If minv́alue is greater or equal to max’s value, a null pointer should be returned.
*/

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	n;
	int	i;

	i = 0;
	n = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (n < 0)
		return (-1);
	ptr = (int *)malloc(n * sizeof(int));
	if (*ptr == -1)
		return (-1);
	*range = ptr;
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (n);
}

/*

#include <stdio.h>

int	main(int argv, char **argc)
{
	int	i;
	int	result;
	int	*tab;
	int	min;
	int	max;

	(void) argv;
	i = 0;
	max =  atoi(argc[2]);
	min =  atoi(argc[1]);
	result = ft_ultimate_range(&tab, min, max);
	printf("numeros de resultados: %d \n", result);
	while (min < max)
	{
		printf("%d ", tab[i]);
		min++;
		i++;
	}
	return (0);
}*/
