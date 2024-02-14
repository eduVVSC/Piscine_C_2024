/*
	Exercise 06: ft_print_comb2

	. Create a function that displays all different combination of two two digits numbers
	(XX XX) between 00 and 99, listed by ascending orders
	. Here’s the expected output :
		00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>
	. Here’s how it should be prototyped:	void ft_print_comb2(void);
*/

#include <unistd.h>

void	escrever(char n1, char n2, char n3, char n4)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, " ", 1);
	write(1, &n3, 1);
	write(1, &n4, 1);
	if (n1 != '9' || n2 != '8' || n3 != '9' || n4 != '9')
	{
		write (1, ", ", 2);
	}
}

void	repeticao(char n1, char n2, char n3, char n4)
{
	while (n1 <= '9')
	{
		while (n2 <= '9')
		{
			while (n3 <= '9')
			{
				while (n4 <= '9')
				{
					if (n1 <= n3 || n2 < n4)
					{
						escrever(n1, n2, n3, n4);
					}
					n4++;
				}
				n3++;
				n4 = '0';
			}
			n2++;
			n3 = '0';
		}
		n1++;
		n2 = '0'; 
	}
}

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;
	char	n3;
	char	n4;

	n1 = '0';
	n2 = '0';
	n3 = '0'; 
	n4 = '0';
	repeticao(n1, n2, n3, n4);
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
