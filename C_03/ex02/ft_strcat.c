/*
	Exercise 02 : ft_strcat
	
	. Reproduce the behavior of the function strcat (man strcat).
	. Here’s how it should be prototyped:	char *ft_strcat(char *dest, char *src)
*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	dest[] = "eu sou";
	char	*src = "Eduardo";
	char	*result = "";
	int	i;

	i = 0;
	result = ft_strcat(dest, src);
	while (result[i] != '\0')
	{
		write(1, &result[i], 1);
		i++;
	}
	return (0);
}*/
