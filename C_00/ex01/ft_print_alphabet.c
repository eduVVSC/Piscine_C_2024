/*

	Exercice 01: ft_print_alphabet
	
	. Create a function that displays the alphabet in lowercase, on a single line, by
	ascending order, starting from the letter ’a’.
	. Here’s how it should be prototyped:	void ft_print_alphabet(void)
*/

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
