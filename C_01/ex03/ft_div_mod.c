/*
	Exercise 03 : ft_div_mod
	
	. Create a function ft_div_mod prototyped like this: 
		void ft_div_mod(int a, int b, int *div, int *mod);
	.This function divides parameters a by b and stores the result in the int pointed by
	div. It also stores the remainder of the division of a by b in the int pointed by mod
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	i_div;
	int	i_mod;
	int	*div;
	int	*mod;

	div = &i_div;
	mod = &i_mod;
	a = 5;
	b = 3;
	ft_div_mod(a, b, div, mod);
	printf("%d divido por %d \n", a, b);
	printf("tem resultado: %d \n", *div);
	printf("E resto: %d \n", *mod);
	return (0);
}*/
