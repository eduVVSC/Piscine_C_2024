/*
	Exercise 05 : ft_strlcat
	
	. Reproduce the behavior of the function strlcat (man strlcat).
	. Here’s how it should be prototyped:
		unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	u;
	unsigned int	total_lenght_src;

	i = 0;
	u = 0;
	total_lenght_src = 0;
	while (src[total_lenght_src] != '\0')
		total_lenght_src++;
	while (dest[i] != '\0')
		i++;
	if (size <= i)
		return (size + total_lenght_src);
	while (src[u] != '\0' && (i + u) < size)
	{
		dest[i + u] = src[u];
		u++;
	}
	dest[i + u] = '\0';
	return (i + total_lenght_src);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*src;
	char	dest[20];

	printf("%d \n", ft_strlcat(src, dest, 100));

	return (0);
}*/
