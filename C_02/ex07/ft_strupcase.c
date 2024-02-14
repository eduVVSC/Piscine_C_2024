/*
	Exercise 07 : ft_strupcase
	
	. Create a function that transforms every letter to uppercase.
	. Here’s how it should be prototyped:	char *ft_strupcase(char *str)
	. It should return str.
*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char str[] = "asd09BcLk22";
	char *carac_up;

	carac_up = ft_strupcase(str);
	printf("%s", carac_up);
	return (0);
}*/
