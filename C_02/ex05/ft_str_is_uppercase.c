/*
	Exercise 05 : ft_str_is_uppercase
	
	. Create a function that returns 1 if the string given as a parameter contains only
	uppercase alphabetical characters, and 0 if it contains any other character.
	. Here’s how it should be prototyped:	int ft_str_is_uppercase(char *str)
	. It should return 1 if str is empty.
*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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

	result = ft_str_is_uppercase(str);
	printf("%d", result);
	return (0);
}*/
