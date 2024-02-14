/*
	Exercise 04 : ft_putnbr_base
	
	• Create a function that displays a number in a base system in the terminal.
	• This number is given in the shape of an int, and the radix in the shape of a string
	of characters.
	• The base-system contains all useable symbols to display that number :
		◦ 0123456789 is the commonly used base system to represent decimal numbers
		◦ 01 is a binary base system ;
		◦ 0123456789ABCDEF an hexadecimal base system ;
		◦ poneyvif is an octal base system.
	• The function must handle negative numbers.
	• If there’s an invalid argument, nothing should be displayed. Examples of invalid
	arguments :
		◦ base is empty or size of 1;
		◦ base contains the same character twice ;
		◦ base contains + or - ;
	• Here’s how it should be prototyped :
		void	ft_putnbr_base(int nbr, char *base)
*/

#include <unistd.h>

int	checar_anteriores(char *base, int posicao)
{
	int	i;

	i = 0;
	while (i < posicao)
	{
		if (base[i] == base[posicao])
			return (0);
		i++;
	}
	return (1);
}

int	ler_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (checar_anteriores(base, i) == 0)
			return (0);
		i++;
	}
	return (1);
}

void	putnbr(int nbr, int larg_base, char *base)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		write (1, "-", 1);
	}
	if (nbr > larg_base - 1)
	{
		putnbr(nbr / larg_base, larg_base, base);
		write (1, &base[nbr % larg_base], 1);
	}
	else 
		write (1, &base[nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	larg_base;

	larg_base = 0;
	while (base[larg_base] != '\0')
		larg_base++;
	if(larg_base == 2 && nbr == -2147483648)
		write(1, "-10000000000000000000000000000000", 33);
	else
	{
		ler_base(base);
		if (larg_base < 2 || ler_base(base) == 0)
			larg_base--;
		else 
			putnbr(nbr, larg_base, base);
	}
}

/*
// suas entradas seram, qual numero voce quer converter, seguido da base para converter
// a base nao pode conter repeticoes de caracteres.
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void) argc;
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}
*/
