/*
	Exercise 05 : ft_atoi_base
	
	•Write a function that converts the initial portion of the string pointed by str to int
	representation.
	• str is in a specific base given as a second parameter.
	• excepted the base rule, the function should work exactly like ft_atoi.
	• If there’s an invalid argument, the function should return 0. Examples of invalid
	arguments :
		◦ base is empty or size of 1;
		◦ base contains the same character twice ;
		◦ base contains + or - or whitespaces;
	• Here’s how it should be prototyped :
	int	ft_atoi_base(char *str, char *base);
*/

int	check_base(char *base, int length)
{
	int	i;

	i = 0;
	while (i < length)
	{
		if (base[i] == base[length])
			return (0);
		i++;
	}
	return (1);
}

int	check_se_esta_na_base(char *str, char *base, int i)
{
	int	u;

	u = 0;
	while (base[u] != '\0')
	{
		if (str[i] == base[u])
			return (1);
		u++;
	}
	return (0);
}

int	search_position(int i, char *str, char *base)
{
	int	u;

	u = 0;
	while (base[u] != '\0')
	{
		if (str[i] == base[u])
			return (u);
		u++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	auto int base_length = 0, retorno = 0, sinal = 1, i = 0;
	while (base[base_length] != '\0')
		base_length++;
	if (base_length < 1 || check_base(base, base_length) == 0)
		return (retorno);
	while (str[i] == 32 || str[i] == '\t')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sinal = -sinal;
		i++;
	}
	while (check_se_esta_na_base(str, base, i) == 1)
	{
		retorno = retorno * base_length + search_position(i, str, base);
		i++;
	}
	return (retorno * sinal);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{

	(void) argc;
	printf("%d", ft_atoi_base(argv[1], argv[2]));
	return (0);
}*/
