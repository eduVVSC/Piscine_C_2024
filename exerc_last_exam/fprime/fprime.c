
#include <stdio.h>
#include <stdlib.h>

int	is_prime(int num)
{
	int	i;

	i = 2;
	while (i <= num / i)
	{
		if(num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	search_divisors(int num)
{
	int	i;

	i = 1;
	if (is_prime(num) == 1)
		printf("%d", num);
	else 
	{
		while (num > 1)
		{
			i++;
			if (is_prime(i) == 1 && num % i == 0)
			{
				printf("%d", i);
				num = num / i;
				i = 1;
				if (num != 1)
					printf("*");
			}
		}
	}
}

int	main(int ac, char **av)
{
	if(ac == 2)
		search_divisors(atoi(av[1]));
	printf("\n");
	return (0);
}
