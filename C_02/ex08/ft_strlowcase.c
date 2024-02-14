/*	
	Exercise 07 : ft_strupcase
	
	. Create a function that transforms every letter to uppercase.
	. Here’s how it should be prototyped:	char *ft_strupcase(char *str)
	. It should return str.
*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "asdASDasd123";
	char	*carac_down;

	carac_down = ft_strlowcase(str);
	printf("%s", carac_down);
	return (0);
}*/
