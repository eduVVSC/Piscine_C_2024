/*
	Exercise 02 : ft_putnbr
	
	. Create a function that displays the number entered as a parameter. The function
	has to be able to display all possible values within an int type variable.
	. Here’s how it should be prototyped:	void	ft_putnbr(int nb)
	. For example:
		ft_putnbr(42) displays "42".
*/

#include <unistd.h>

void	print_numb_09(int nb, char result)
{
	result = nb + '0';
	write(1, &result, 1);
}

void	ft_putnbr(int nb)
{
	char	result;
	int		mod_nb;

	result = '\0';
	mod_nb = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		mod_nb = 1;
	}
	if (nb < 0 && mod_nb == 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb <= 9 && nb >= 0)
		print_numb_09 (nb, result);
	if (nb > 9)
	{
		result = (nb % 10) + '0';
		nb = nb / 10;
		ft_putnbr(nb);
		write(1, &result, 1);
	}
}

/*
int	main(void)
{
	ft_putnbr(2147483647);
	return (0);
}
*/
