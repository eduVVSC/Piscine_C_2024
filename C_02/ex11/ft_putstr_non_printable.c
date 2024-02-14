/*
	Exercise 11:	ft_putstr_non_printable
	
	. Create a function that displays a string of characters onscreen. If this string con-
	tains characters that aren’t printable, they’ll have to be displayed in the shape of
	hexadecimals (lowercase), preceeded by a "backslash".
	. For example:
			Coucou\ntu vas bien ?
	. The function should display:
			Coucou\0atu vas bien ?
	. Here’s how it should be prototyped:	void ft_putstr_non_printable(char *str)
*/

#include <unistd.h>

void	ft_dec_to_hexa(unsigned char c);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write(1, "\\", 1);
			ft_dec_to_hexa(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

void	ft_dec_to_hexa(unsigned char c)
{
	char	*hexabase;

	hexabase = "0123456789abcdef";
	if (c / 16 > 0)
	{
		write(1, &hexabase[c / 16], 1);
		write(1, &hexabase[c % 16], 1);
	}
	else
	{
		write(1, "0", 1);
		write(1, &hexabase[c], 1);
	}
}
/*

int	main(void)
{
	char *str = "hello \t tudo bem?";

	ft_putstr_non_printable(str);
	return (0);
}
*/
