/* 
	Exercise 02 : ft_swap
	
	. Create a function that swaps the value of two integers whose addresses are entered
	as parameters.
	. Here’s how it should be prototyped:	void ft_swap(int *a, int *b)
 */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*
int	main(void)
{
	int	a;
	int	b;
	ft_swap(a, b);
	return (0);
}*/
