
#include <unistd.h>

void	putnbr(int num_entries)
{
	char	print;

	if (num_entries <= 9)
	{
		print = num_entries + '0';
		write (1, &print, 1);
	}
	else
	{
		putnbr(num_entries / 10);
		print = num_entries % 10 + '0'; 
		write (1, &print, 1);
	}
}

int	main(int ac, char **av)
{
	if(ac == 1)
		write(1, "0", 1);
	else 
		putnbr(ac - 1);
	write(1, "\n", 1);
	return (0);
}
