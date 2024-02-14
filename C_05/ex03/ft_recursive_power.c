/*
	Exercise 03 : ft_recursive_power
	
	. Create a recursive function that returns the value of a power applied to a number.
	. A power lower than 0 returns 0.
	. Overflows must not be handled, the function return will be undefined.
	. We’ve decided that 0 power 0 will returns 1
	. Here’s how it should be prototyped:	int ft_recursive_power(int nb, int power)
*/

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power -1));
}

/*
#include <stdio.h>

int	main(void)
{
	int	nb =  2;
	int	power = -4;
	int	result;

	result = ft_recursive_power(nb, power);
	printf("%d", result);
	return (0);
}*/
