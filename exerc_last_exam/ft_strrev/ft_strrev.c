
#include <stdio.h>
#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	total_length;
	char	swap; 

	i = 0;
	total_length = 0;
	while (str[total_length] != '\0')
		total_length++;
	total_length = total_length - 1;
	while (i < total_length)
	{
		swap = str[i];
		str[i] = str[total_length];
		str[total_length] = swap;
		i++;
		total_length--;
	}
	return (str);
}

int	main()
{
	char	*str;
	
	str = (char *) malloc (sizeof(char) * 4);
	str[0] = 'o';
	str[1] = 'l';
	str[2] = 'a';
	str[3] = '\0';
	printf("%s", ft_strrev(str));
	return (0);
}
