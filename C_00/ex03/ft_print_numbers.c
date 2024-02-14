/*
	Exercise 03: ft_print_numbers
	
	. Create a function that displays all digits, on a single line, by ascending order.
	. Here’s how it should be prototyped:	void ft_print_numbers(void);
*/

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	n;

	n = '0';
	while (n <= '9')
	{
		write(1, &n, 1);
		n++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
