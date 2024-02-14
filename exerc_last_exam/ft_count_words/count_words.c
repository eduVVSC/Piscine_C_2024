
#include <stdio.h>

int	count_words(char *str)
{
	int	i;
	int	count_words;

	i = 0;
	count_words = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] == 32 || (str[i] >= 9 && str[i] <= 12) || str[i] == '\0'))
			if (str[i -1] == 32 || (str[i - 1] >= 9 && str[i - 1] <= 12) 
					|| str[i - 1] == '\0')
				count_words++;
		i++;
	}
	return (count_words);
}

int	main(void)
{
	char	*str = "Voce comeu a minha bunda";

	printf("A string : %s, tem %d palavras\n", str, count_words(str));
	return (0);
}
