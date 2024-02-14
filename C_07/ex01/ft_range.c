/*
	Exercise 01 : ft_range
	
	. Create a function ft_range which returns an array ofints. This int array should
	contain all values between min and max.
	. Min included - max excluded.
	. Here’s how it should be prototyped:	int *ft_range(int min, int max)
	. If minv́alue is greater or equal to max’s value, a null pointer should be returned.
*/

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	numeros_a_imprimir;
	int	*respostas;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	else
	{
		numeros_a_imprimir = max - min;
		respostas = (int *)malloc(numeros_a_imprimir * sizeof(int));
		while (i < numeros_a_imprimir)
		{
			respostas[i] = min + i;
			i++;
		}
	}
	return (respostas);
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	*resultado;
	int	i;

	(void) argc;
	i = 0;
	resultado = ft_range(atoi(argv[1]), atoi(argv[2]));
	while (i < 5)
	{
		printf("%d-", resultado[i]);
		i++;
	}
	return (0);
}*/
