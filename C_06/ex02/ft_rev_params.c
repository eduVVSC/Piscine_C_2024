/*
	Exercise 02 : ft_rev_params
	
	. We’re dealing with a program here, you should therefore have a function main in
	your .c file.
	. Create a program that displays its given arguments.
	. One per line, in the reverse order of the command line.
	. It should display all arguments, except for argv[0].
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	u;

	u = argc - 1;
	while (u > 0)
	{
		while (argv[u][i] != '\0')
		{
			write (1, &argv[u][i], 1);
			i++;
		}
		write (1, "\n", 1);
		i = 0;
		u--;
	}
	return (0);
}
