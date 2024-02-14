/*
	Exercise 00 : ft_strcpy

	. Reproduce the behavior of the function strcpy (man strcpy).
	. Here’s how it should be prototyped:	char *ft_strcpy(char *dest, char *src);
*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "fgygygklkklklk0";
	char	src[] = "rcygugy";
	char	*d;

	d = ft_strcpy(dest, src);
	printf("%s\n", d);
	return (0);
}*/
