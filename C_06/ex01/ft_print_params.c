/*
	Exercise 01 : ft_print_params
	
	. We’re dealing with a program here, you should therefore have a function main in
	your .c file.
	. Create a program that displays its given arguments.
	. One per line, in the same order as in the command line.
	. It should display all arguments, except for argv[0].
	. Example :
		$>./a.out test1 test2 test3 | cat -e
		test1$
		test2$
		test3$
		$>
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	u;

	i = 0;
	u = 1;
	while (u < argc)
	{
		while (argv[u][i] != '\0')
		{
			write (1, &argv[u][i], 1);
			i++;
		}
		write (1, "\n", 1);
		i = 0;
		u++;
	}
	return (0);
}
