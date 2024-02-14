
#include <stdio.h>

// tenho que passa caso tenham caracteres maiusculos para minusculos para executar o programa 
// se o numero na base requisitada for negativo, so pode ser aceita com o sinal negativo antes do numero e o primeiro caracter da string 
// tenho que fazer as entradas, que nesse exercicios sao o numero de caracteres que tem  na base escolhida, que estaram dentro do grupo: "0123456789abcdef"
// converter para int, base 10 

int	ft_strcmp(char str, char *whole_base, int str_base)
{
	int	i;

	i = 0;
	while (i < str_base)
	{
		if(whole_base[i] == str)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	total;
	char	*whole_base = "0123456789abcdef";

	i = 0;
	sign = 1;
	total = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13 ))
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_strcmp(str[i], whole_base, str_base) != -1 && str[i] != '\0')
	{
		total = total * str_base + ft_strcmp(str[i], whole_base, str_base);
		i++;
	}
	return (total * sign);
}

int	main(void)
{
	int	str_base = 16;
	char	*str = "     -10000";

	printf("|%s|, na base |%d| em decimal eh : |%d|", str, str_base, ft_atoi_base(str, str_base));
	return (0);
}
