/*
	Exercise 03 : ft_atoi
	
	. Write a function that converts the initial portion of the string pointed by str to its		
	int representation
	. The string can start with an arbitray amount of white space (as determined by isspace(3))
	. The string can be followed by an arbitrary amount of + and - signs, - sign will change
	the sign of the int returned based on the number of - is odd or even.
	. Finally the string can be followed by any numbers of the base 10.
	. Your function should read the string until the string stop following the rules and return
	the number found until now.
	. You should not take care of overflow or underflow. result can be undefined in that case.
	. Here’s an example of a program that prints the atoi return value:
		/a.out " ---+--+1234ab567"
		-1234
	. Here’s how it should be prototyped:	int	ft_atoi(char *str)
*/

int	ft_atoi(char *str)
{
	int	i;
	int	cont_menos;
	int	resultado;

	i = 0;
	resultado = 0;
	cont_menos = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			cont_menos = cont_menos * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultado = resultado * 10 + str[i] - '0';
		i++;
	}
	return (resultado * cont_menos);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str = "---214a7483647";
	int	result;

	result = ft_atoi(str);
	printf("%d", result);
	return (0);
}
*/
