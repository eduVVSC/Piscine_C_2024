
#include <unistd.h>

int	str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	i;
	int	n;
	int	found;

	i = 0;
	n = 0;
	found = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			while(av[2][n] != '\0')
			{
				if(av[1][i] == av[2][n])
				{
					found++;
					break;
				}
				n++;
			}
			i++;
		}
		if (found == str_length(av[1]))
		{
			i = 0;
			while (av[1][i] != '\0')
			{
				write (1, &av[1][i], 1);
				i++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}
