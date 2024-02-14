
#include <unistd.h>

int	mini_atoi(char *str)
{
	int	i;
	int	num;

	num = 0;
	i = 0;
	while(str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		num = num * 10 + str[i] - '0';	
		i++;
	}
	return (num);
}

void	putnbr(int nb)
{
	char	print;

	if(nb <= 9)
	{
		print = nb + '0';
		write (1, &print, 1);
	}
	else
	{
		putnbr(nb / 10);
		print = nb % 10 + '0';
		write (1, &print, 1);
	}
}

void	write_tab_mult(int nb)
{
	int	multi;
	
	multi = 1;
	while (multi <= 9)
	{
		putnbr(multi);
		write (1, " x ", 3);
		putnbr(nb);
		write (1, " = ", 3);
		putnbr(nb * multi);
		write (1, "\n", 1);
		multi++;
	}
}

int	main(int ac, char **av)
{
	int	num;

	if (ac == 2)
	{
		num = mini_atoi(av[1]);
		if (num >= 0 && num < 238609294)
			write_tab_mult(num);
	}
	else
		write (1, "\n", 1);
	return (0);
}
