/*
	Exercise 02 : ft_iterative_power
	
	. Create an iterated function that returns the value of a power applied to a number.
	. A power lower than 0 returns 0.
	. Overflows must not be handled.
	. We’ve decided that 0 power 0 will returns 1
	. Here’s how it should be prototyped:	int ft_iterative_power(int nb, int power)
*/

int	ft_iterative_power(int nb, int power)
{
	int	n;
	int	nb_init;

	nb_init = nb;
	n = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (n < power)
	{
		nb = nb * nb_init;
		n++;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb = 2;
	int	power = 30;
	int	result;

	result = ft_iterative_power(nb, power);
	printf("%d", result);
	return (0);
}
*/
