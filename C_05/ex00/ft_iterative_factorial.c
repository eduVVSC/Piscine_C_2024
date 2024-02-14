/*
	Exercise 00 : ft_iterative_factorial
	
	. Create an iterated function that returns a number. This number is the result of a
	factorial operation based on the number given as a parameter.
	. If the argument is not valid the function should return 0.
	. Overflows must not be handled, the function return will be undefined.
	. Here’s how it should be prototyped:	int ft_iterative_factorial(int nb)

	// Minhas OBS:
	// valor maximo de nb = 12, porque seu fatorial 
	//eh o ultimo que esta dentro do grupo aceitavel por int
*/

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	valor_nb;

	valor_nb = nb;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (i < valor_nb)
	{
		nb = nb * i;
		i++;
	}
	return (nb);
}

/*
#include <stdio.h>

int	main(void)
{
	int	nb = 12;
	int	result;
	result = ft_iterative_factorial(nb);
	printf("%d", result);
	return (0);
}*/
