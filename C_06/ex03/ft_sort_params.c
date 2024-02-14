/*
	Exercise 03 : ft_sort_params

	. We’re dealing with a program here, you should therefore have a function main in
	your .c file.
	. Create a program that displays its given arguments sorted by ascii order.
	. It should display all arguments, except for argv[0].
	. One argument per line.
*/

#include <unistd.h>

int	str_compare(char *argv1, char *argv2)
{
	int	coluna;

	coluna = 0;
	while (argv1[coluna] != '\0' || argv2[coluna] != '\0')
	{
		if (argv1[coluna] != argv2[coluna])
			return (argv1[coluna] - argv2[coluna]);
		coluna++;
	}
	return (0);
}

char	**ordenando(int argc, char **argv)
{
	char	*swap;
	int		u;
	int		trocado;

	u = 1;
	trocado = 1;
	while (trocado == 1)
	{
		trocado = 0;
		u = 1;
		while (u < argc - 1)
		{
			if (str_compare(argv[u], argv[u + 1]) > 0)
			{
				swap = argv[u + 1];
				argv[u + 1] = argv[u];
				argv[u] = swap;
				trocado = 1;
			}
			u++;
		}
	}
	return (argv);
}

void	escrever(int argc, char **argv)
{
	int	u;
	int	i;

	i = 0;
	u = 1;
	while (u < argc) 
	{
		while (argv[u][i] != '\0')
		{
			write(1, &argv[u][i], 1);
			i++;
		}
		i = 0;
		write (1, "\n", 1);
		u++;
	}
}

int	main(int argc, char **argv)
{
	ordenando(argc, argv);
	escrever(argc, argv);
	return (0);
}
