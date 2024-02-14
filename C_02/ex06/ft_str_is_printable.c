/*
	Exercise 06 : ft_str_is_printable
	
	. Create a function that returns 1 if the string given as a parameter contains only
	printable characters, and 0 if it contains any other character.
	. Here’s how it should be prototyped:	int ft_str_is_printable(char *str)
	. It should return 1 if str is empty.
*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "";
	int	result;

	result = ft_str_is_printable(str);
	printf("%d", result);
	return (0);
}
*/
