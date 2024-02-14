
#include <unistd.h>

void	print_all(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] == 32 || str[i] == '\t' || str[i] == '\0'))
			write (1, &str[i], 1);
		if ((str[i] == 32 || str[i] == '\t' || str[i] == '\0') && (!(str[i -1] == 32 || str[i -1] == '\t' || str[i - 1] == '\0')) && str[i + 1] != '\0')
			write (1, " ", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		print_all(av[1]);
	write (1, "\n", 1);
	return (0);
}
