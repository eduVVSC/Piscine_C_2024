
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	qnt_print;
	int	*range;
	int	i;

	i = 0;
	if(start > end)
		qnt_print = start - end + 1;
	else
		qnt_print = end - start + 1;
	range = (int *)malloc(qnt_print * sizeof(int));
	while (i < qnt_print)
	{
		range[i] = start;
		if (start > end)
			start--;
		else 
			start++;
		i++;
	}
	return (range);
}

int	main(int ac, char **av)
{
	int	start;
	int	end;
	int	qnt_prints;
	int	*result;
	int	i;

	i = 0;
	if(ac != 3)
		return (0);
	start = atoi(av[1]);
	end = atoi(av[2]);
	result = ft_range(start, end);
	if (start > end)
		qnt_prints = start - end + 1;
	else
		qnt_prints = end - start + 1;
	while (i < qnt_prints)
	{
		printf("%d, ", result[i]);
		i++;
	}
	printf("\n");
	return (0);
}
