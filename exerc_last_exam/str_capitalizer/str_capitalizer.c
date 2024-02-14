
#include <unistd.h>

void	low_case(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

void	str_capitalizer(char *str)
{
	int	i;

	i = 0;
	low_case(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && 
	(str[i-1] == 32 || str[i- 1] == '\0' || (str[i] >= 9 && str[i] <= 13) ))
			str[i] -= 32;
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			str_capitalizer(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}
