/*
	Exercise 04 : ft_strstr
	
	. Reproduce the behavior of the function strstr (man strstr).
	. Here’s how it should be prototyped:	char *ft_strstr(char *str, char *to_find)
*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	u;

	i = 0;
	u = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[u])
		{
			while (str[i + u] == to_find[u])
			{
				u++;
				if (to_find[u] == '\0')
					return (&str[i]);
			}
			u = 0;
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "goodforyou";
	char	to_find[] = "night";
	char	*result;

	result = ft_strstr(str, to_find);
	printf("%s", result);
	return (0); 
}
*/
/*
O que acontece aqui eh: estamos lendo a string str, ate achar um caracter que seja igual, ao achar,entra em na execucao de um while, que roda ate que o to_find[u] seja igual a '\0', isso porque, chega a significa que o que queria ser encontrado, foi 100% encontrado, dai, retornamos a localizacao de onde esta o primeiro caracter da combinacao.
*/
