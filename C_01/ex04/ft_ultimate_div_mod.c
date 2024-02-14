/*
	Exercise 04 : ft_ultimate_div_mod
	
	. Create a function ft_ultimate_div_mod with the following prototype: 
		void ft_ultimate_div_mod(int *a, int *b);
	. This function divides parameters a by b. The result of this division is stored in the
	int pointed by a. The remainder of the division is stored in the int pointed by b.
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	num_guard;

	num_guard = *a;
	*a = *a / *b;
	*b = num_guard % *b;
}

/*
#include <stdio.h>

int	main(void)
{
	int	*a;
	int	*b;
	int	i_a;
	int	i_b;

	a = &i_a;
	b = &i_b;
	*a = 23;
	*b = 5;
	printf("%d / %d\n", *a, *b);
	ft_ultimate_div_mod(a, b);
	printf("resultado :%d, resto: %d\n", *a, *b);
	return (0);
}*/
