
#include <stdlib.h>
#include <stdio.h>

int	search_high_den(int n1, int n2)
{
	int	div;
	int	i;

	i = 1;
	while (i <= n2 && i <= n1)
	{
		if(n2 % i == 0 && n1 % i == 0)
			div = i;
		i++;
	}
	return (div);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%d", search_high_den(atoi(av[1]), atoi(av[2])));
	printf("\n");
	return (0);
}
