
#include <unistd.h>

void	search_str(char *to_find, char *search)
{
	int	i;
	int	u;

	i = 0,
	u = 0;
	while (search[i] != '\0' && to_find[u] != '\0')
	{
		if (search[i] == to_find[u])
			u++;
		i++;
	}
	if (to_find[u] == '\0')
		write (1, "1", 1);
	else
		write (1, "0", 1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		search_str(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
