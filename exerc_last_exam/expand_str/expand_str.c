
#include <unistd.h>

void	search_n_print(char *str)
{
	int	i;
	int	total_words;
	int	control;

	control = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] == 32 || (str[i] <= 13 && str[i] >= 9)))
		{
			write (1, &str[i], 1);
			control = 1;
		}
		if ((str[i] == 32 || (str[i] <= 13 && str[i] >= 9)) && control == 1 && 
		(!(str[i + 1] == 32 || (str[i+1] <= 13 && str[i+1] >= 9) 
		   || str[i+1] == 0)))
		{
			write (1, "   ", 3);
			control = 0;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		search_n_print(av[1]);
	write(1, "\n", 1);
	return (0);
}
