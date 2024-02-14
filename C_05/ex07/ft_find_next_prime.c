/*
	Exercise 07 : ft_find_next_prime
	
	. Create a function that returns the next prime number greater or equal to the number
	given as argument.
	. Here’s how it should be prototyped:	int ft_is_prime(int nb)
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
		return (2);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	check;
	int	divisivel;

	divisivel = 0;
	check = 0;
	i = 1;
	if (ft_is_prime(nb) == 2)
		return (nb);
	while (check != 1)
	{
		while (i <= nb)
		{
			if (nb % i == 0)
				divisivel++;
			i++;
		}
		if (divisivel == 2)
			check = 1;
		nb++;
		divisivel = 0;
		i = 1;
	}
	return (nb - 1);
}

/*
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	printf("%d", ft_find_next_prime(atoi(av[1])));
	return (0);
}
*/
