/*
	Exercise 00 : ft_strcmp
	
	. Reproduce the behavior of the function strcmp (man strcmp).
	. Here’s how it should be prototyped:	int ft_strcmp(char *s1, char *s2)
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char *s1 = "aSD";
	char *s2 = "Asd";
	int result;

	result = ft_strcmp(s1, s2);
	printf("%d", result);
	return (0);
}
*/
