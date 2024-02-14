/*
	Exercise 05 : ft_sqrt
	
	. Create a function that returns the square root of a number (if it exists), or 0 if the
	square root is an irrational number.
	. Here’s how it should be prototyped:	int ft_sqrt(int nb)
*/

int	ft_sqrt(int nb)
{
	int	i;
	int	teste;

	teste = 0;
	i = 0;
	if (nb < 0 || nb > 2147483647)
		return (0);
	while (teste < nb && i <= 46340)
	{
		teste = i * i;
		if (teste == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(400000000));
	return (0);
}
*/
