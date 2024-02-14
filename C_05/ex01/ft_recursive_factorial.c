/*
	Exercise 01 : ft_recursive_factorial
	
	. Create a recursive function that returns the factorial of the number given as a
	parameter.
	. If the argument is not valid the function should return 0.
	. Overflows must not be handled, the function return will be undefined.
	. Here’s how it should be prototyped:	int ft_recursive_factorial(int nb)
*/

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
		return (nb * ft_recursive_factorial (nb - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb = 5;
	int	result;

	result = ft_recursive_factorial(nb);
	printf("%d", result);
	return (0);
}
*/
