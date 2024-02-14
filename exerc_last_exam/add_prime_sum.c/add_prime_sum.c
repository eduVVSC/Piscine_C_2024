// fazer uma funcao que somo todos os primos anteriores ao numero passado como parametro
//

#include <unistd.h>
#include <stdio.h>

int	mini_atoi(char *str)
{
	int	numb;
	int	i;

	i = 0;
	numb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		numb = numb * 10 + str[i] - '0';
		i++;
	}
	return (numb);
}

int	is_prime(int nb)
{
	int	i;
	
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (nb);
}

void	putnbr(int soma)
{
	char	print;

	if (soma <= 9 && soma >= 0)
	{
		print = '0' + soma;
		write (1, &print, 1);
	}
	else
	{
		putnbr(soma / 10);
		print = soma % 10 + '0';
		write (1, &print, 1);
	}
}

int	main(int ac, char **av)
{
	int	soma;
	int	nb;

	soma = 0;
	if (ac != 2 || av[1][0] == '-' || (av[1][0] > '9' && av[1][0] < '0'))
	{
		write (1, "0\n", 2);
		return (0);
	}
	nb = mini_atoi(av[1]);
	while (nb > 1)
	{
		if(is_prime(nb) != 0)
			soma = soma + nb;
		nb--;
	}
	putnbr(soma);
	write (1, "\n", 1);
	return (0);
}

/*

	o limite de testes esta entre 0 e aproximadamente 200.000, apos isso 
	supera o limite da variavel int.
*/
