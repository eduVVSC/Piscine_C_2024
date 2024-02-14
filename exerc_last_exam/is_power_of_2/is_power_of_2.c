
#include <stdio.h>
#include <stdlib.h>

int	power(unsigned int i, unsigned n);

int	is_power_of_2(unsigned int n)
{
	unsigned int i;
	unsigned int result;

	i = 1;
	result = 1;
	if (n == 1 || n == 2)
		return (1);
	while (result <= n)
	{
		result = result * 2;
		if(result == n)
			return (1);
		i++;
	}
	return (0);
}

int	main (int ac, char **av)
{
	(void) ac;
	printf("%d\n", is_power_of_2(atoi(av[1])));
	return (0);
}

