
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

int	main(void)
{
	char	*str = "Vamos comer lasanha com batata palha hoje";

	printf("A string '%s', tem %d caractes\n ", str, ft_strlen(str));
	return (0);
}
