/*
	Exercise 03 : ft_strncat
	
	. Reproduce the behavior of the function strncat (man strncat).
	. Here’s how it should be prototyped:	
		char *ft_strncat(char *dest, char *src, unsigned int nb)
*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
		i++;
	if (nb == 0)
		return (dest);
	while (src[n] != '\0' && n < nb)
	{
		dest[i + n] = src[n];
		n++;
	}
	dest[i + n] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*dest = "Hello";
	char	*src = "World";
	unsigned int	nb = 3;
	char	*dest_new = "";

	dest_new = ft_strncat(dest, src, nb);
	printf("%s", dest_new);
	printf("%d", nb);
	return (0);
}*/
