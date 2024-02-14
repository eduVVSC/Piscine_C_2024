/*
	Exercise 04 : ft_fibonacci
	
	
	. Create a function ft_fibonacci that returns the n-th element of the Fibonacci
	sequence, the first element being at the 0 index. We’ll consider that the Fibonacci
	sequence starts like this: 0, 1, 1, 2.
	. Overflows must not be handled, the function return will be undefined.
	. Here’s how it should be prototyped:	int ft_fibonacci(int index)
	. Obviously, ft_fibonacci has to be recursive.
	. If the index is less than 0, the function should return -1.
	
	// MINHAS OBS
	// 0 ultimo valor que esta dentro do max int, eh  o numero 46 da sequecia de Fibonacci
*/

int	ft_fibonacci(int index)
{
	if (index == 19)
		return (4181);
	if (index == 20)
		return (6765);
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index == 0)
		return (0);
	return (ft_fibonacci (index - 1) + ft_fibonacci (index - 2));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d",  ft_fibonacci(46));
	return (0);
}*/
