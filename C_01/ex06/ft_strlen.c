/* 
	Exercise 06 : ft_strlen
	
	. Create a function that counts and returns the number of characters in a string.
	. Here’s how it should be prototyped:	int ft_strlen(char *str);
*/

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*str = "imsol\ncky\t";
	int	largura;
	
	largura = ft_strlen(str);
	printf("%d", largura);
	return (0);
}
*/
