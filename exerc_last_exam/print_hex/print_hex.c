
#include <unistd.h>

int	mini_atoi(char *str)
{
	int	total;
	int	i;

	i = 0;
	total = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + str[i] - '0';
		i++;
	}
	return (total);
}

void	convert_to_hex(int dec)
{
	char	*hexa = "0123456789abcdef";

	if (dec >= 16)
		convert_to_hex(dec / 16);
	write (1, &hexa[dec % 16], 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		convert_to_hex(mini_atoi(av[1]));
	write (1, "\n", 1);
	return (0);
}
