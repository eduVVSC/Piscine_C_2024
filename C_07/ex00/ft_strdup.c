/*
	Exercise 00 : ft_strdup
	
	. Reproduce the behavior of the function strdup (man strdup).
	. Here’s how it should be prototyped:	char *ft_strdup(char *src)
*/

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*string_duplicado;
	int		i;
	int		n;

	n = 0;
	i = 0;
	while (src[n] != '\0')
		n++;
	string_duplicado = (char *) malloc((n + 1) * sizeof(char)); 
	while (i < n)
	{
		string_duplicado[i] = src[i];
		i++;
	}
	string_duplicado[i] = '\0';
	return (string_duplicado);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1 = "tchau";
	char	*s1_2 = "tchau";
	char	*result;
	
	result = ft_strdup(s1);
	printf("%s \n", result);
	printf("%s", strdup(s1_2));
	return (0);
}*/
