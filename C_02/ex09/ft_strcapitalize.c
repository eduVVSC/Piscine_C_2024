/*
	Exercise 09 : ft_strcapitalize
	
	. Create a function that capitalizes the first letter of each word and transforms all
	other letters to lowercase.
	. A word is a string of alphanumeric characters.
	. Here’s how it should be prototyped:	char *ft_strlowcase(char *str)
	. It should return str.
	. For example:	
		salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un
	. Becomes:	
		Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un
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

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
				if(!((str[i - 1] >= 'a' && str[i - 1] <= 'z') || 
				(str[i - 1] >= 'A' && str[i - 1] <= 'Z') || 
				(str[i - 1] >= '0' && str[i - 1] <= '9')))
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
	char str[] = "     salut, comment tu vas ? 42mots quarante-deux; +cinquante+et+un";
	char *str_up;

	str_up = ft_strcapitalize(str);
	printf("%s", str_up);
	return (0);
}*/
