/* 
	Exercise 08 : ft_sort_int_tab

	. Create a function which sorts an array of integers by ascending order.
	. The arguments are a pointer to int and the number of ints in the array.
	. Here’s how it should be prototyped:	void ft_sort_int_tab(int *tab, int size);
*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	troca;
	int	trocado;

	trocado = 1;
	while (trocado == 1)
	{
		trocado = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				troca = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = troca;
				trocado = 1;
			}
			i++;
		}
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	size = 9;
	int	tab[] = {1, 70, 28, 55, 2, 15, 1000, 12345, 0};
	int	i = 0;

	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n");  
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}   
	return (0);
}*/
