/* 
	Exercise 07 : ft_rev_int_tab
	
	. Create a function which reverses a given array of integer (first goes last, etc).
	. The arguments are a pointer to int and the number of ints in the array.
	. Here’s how it should be prototyped:	void ft_rev_int_tab(int *tab, int size)
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	left;
	int	right;
	int	swap;

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		swap = tab[left];
		tab[left] = tab[right];
		tab[right] = swap;
		left++;
		right--;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
	int	size;
	int	i;
	
	i = 0;
	size = 10;
	printf ("Before function: ");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, size);
	i = 0;
	printf ("\nAfter function: ");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
