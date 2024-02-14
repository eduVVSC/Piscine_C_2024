/*
	Exercise 05: ft_print_comb

	. Create a function that displays all different combinations of three different digits in
	ascending order, listed by ascending order - yes, repetition is voluntary.
	. Here’s the intended output:
		012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
	. 987 isn’t there because 789 already is.
	. 999 isn’t there because the digit 9 is present more than once.
	. Here’s how it should be prototyped: void ft_print_comb(void);
*/

#include <unistd.h>

void	ft_write1(char cen, char dez, char uni)
{
	write(1, &cen, 1);
	write(1, &dez, 1);
	write(1, &uni, 1);
	write(1, ", ", 2);
}

void	ft_write2(char cen, char dez, char uni)
{
	write(1, &cen, 1);
	write(1, &dez, 1);
	write(1, &uni, 1);
	write(1, "\n", 1);
}

void	repeticao(char uni, char dez, char cen)
{
	while (cen < '8')
	{
		while (dez < '9')
		{
			while (uni <= '9')
			{
				if (cen == dez || dez == uni || cen == uni)
				{
				}
				else if (cen == '7' && dez == '8' && uni == '9')
					ft_write2(cen, dez, uni);
				else if (cen > dez || dez > uni)
				{
				}
				else
					ft_write1(cen, dez, uni);
				uni++;
			}
			uni = dez + 1;
			dez++;
		}
		dez = cen + 1;
		cen++;
	}
}

void	ft_print_comb(void)
{
	char	cen;
	char	dez;
	char	uni;

	cen = '0';
	dez = '1';
	uni = '2';
	repeticao (uni, dez, cen);
}

/*
int	main(void)
{
	ft_print_comb ();
	return (0);
}
*/
