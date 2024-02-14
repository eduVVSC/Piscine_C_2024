/*
	Exercise 01 : ft_strncpy
	
	. Reproduce the behavior of the function strncpy (man strncpy).
	. Here’s how it should be prototyped:	
		char *ft_strncpy(char *dest, char *src, unsigned int n);
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[100];
	char	*src = "Testing the string n copy";
	int	size;
	
	dest[1] = 'o';
	dest[2] = 'i';
	size = 200;
	printf("%s \n", dest);
	ft_strncpy(dest, src, size);
	printf("%s\n", dest);
	printf("%s\n", strncpy(dest, src, size));
	return (0);
}
*/
