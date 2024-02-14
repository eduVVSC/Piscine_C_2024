/*
	Exercise 02 : ft_str_is_alpha
	
	. Create a function that returns 1 if the string given as a parameter contains only
	alphabetical characters, and 0 if it contains any other character.
	. Here’s how it should be prototyped:	int ft_str_is_alpha(char *str)
	. It should return 1 if str is empty.
*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') 
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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
	char *str;
	int res;

	res = ft_str_is_alpha(str);
	printf("res eh: %d", res);
	return (0);
}*/
