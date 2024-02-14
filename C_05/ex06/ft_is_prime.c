/*
	Exercise 06 : ft_is_prime
	
	. Create a function that returns 1 if the number given as a parameter is a prime
	number, and 0 if it isn’t.
	. Here’s how it should be prototyped:	int ft_is_prime(int nb);
*/

int	ft_is_prime(int nb)
{
	int	i;
	int	divisivel;

	divisivel = 1;
	i = 1;
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			divisivel++;
		i++;
	}
	if (divisivel != 2)
		return (0);
	else
		return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_is_prime(525542));
}*/
