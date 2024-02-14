/*
	Exercise 00: ft_print_program_name
	
	. We’re dealing with a program here, you should therefore have a function main in
	your .c file.
	. Create a program that displays its own name followed by a new line.
	. Example :
		$>./a.out | cat -e
		./a.out$
		$>
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	(void) argc;
	while (argv[0][i] != '\0')
	{
		write (1, &argv[0][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
