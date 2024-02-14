/* 
	Exercise 07: ft_putnbr
	
	.Create a function that displays the number entered as a parameter. The function
	has to be able to display all possible values within an int type variable.
	.Here’s how it should be prototyped:	void ft_putchar(char c);
	.For example:	ft_putnbr(42) displays "42".
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	check;
	
	check = 1;
	if(nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		check = 0;
	}
	if (nb < 0 && check == 1)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb <= 9 && check == 1)
		ft_putchar(nb + '0');
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

/*
int	main(void)
{
	int	nb;
	
	nb = -10;
	ft_putnbr(nb);
	return (0);
}
*/
