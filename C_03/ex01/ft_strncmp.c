/*
	Exercise 01 : ft_strncmp
	
	. Reproduce the behavior of the function strncmp (man strncmp).
	. Here’s how it should be prototyped:	int ft_strncmp(char *s1, char *s2, unsigned int n)
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != 0 || s2[i] != 0) && i < n)
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
	char	*s1 = "";
	char	*s2 = "";
	int	n;
	int	result;

	result = ft_strncmp(s1, s2, n);
	printf("%d", result);
	return (0);
}*/
