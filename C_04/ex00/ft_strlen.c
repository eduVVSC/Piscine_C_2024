/*
	Exercise 00 : ft_strlen

	. Create a function that counts and returns the number of characters in a string.
	. Here’s how it should be prototyped:	int ft_strlen(char *str)
*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str = "ola";
	int	length;

	length = ft_strlen(str);
	printf("%d", length);
	return (0);
}*/
