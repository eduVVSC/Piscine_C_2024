
#include <stdio.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	many_nbrs;
	int	*rrange;
	auto int 	i = 0;

	if (start >= end)
		many_nbrs = start - end + 1;
	else
		many_nbrs = end - start + 1;
	rrange = (int *)malloc(many_nbrs * sizeof(int));
	if (start >= end)
	{
		while (start >= end)
		{
			rrange[i] = end;
			end++;
			i++;
		}
	}
	else
	{
		while (end >= start)
		{
			rrange[i] = end;
			end--;
			i++;
		}
	}
	return (rrange);
}

int	main(void)
{
	int	*all_nbrs;
	auto int	max = 10, min =0;
	auto int	i = 0;
	int	many_nbrs;

	all_nbrs = ft_rrange(min, max);
	if (min >= max)
		many_nbrs = min - max + 1;
	else
		many_nbrs = max - min + 1;
	while (i < many_nbrs)
	{
		printf("%d ,", all_nbrs[i]);
		i++;
	}
	printf("\n");
	return (0);
}
