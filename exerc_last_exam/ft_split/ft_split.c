
#include <stdio.h>
#include <stdlib.h>

int	count_words(char *str)
{
	int	words_found;
	int	i;

	i = 0;
	words_found = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] == 32 || str[i] == '\0' || (str[i] >= 9 && str[i] <= 13)))
			if (str[i - 1] == 32 || (str[i - 1] >= 9 && str[i - 1] <= 13) ||
				      	str[i - 1] == '\0')
				words_found++;
		i++;
	}
	return (words_found);
}

int	word_length(char *str, int wanted_word)
{
	int	i;
	int	word_length;
	int	word_now;

	word_now = 0;
	i = 0;
	word_length = 0;
	while (str[i] != '\0' && wanted_word >= word_now)
	{
		if(!(str[i] == 32 || str[i] == '\0' || (str[i] >= 9 && str[i] <= 13)))
		{
			if (str[i - 1] == 32 || str[i - 1] == '\0' ||
			   (str[i - 1] >= 9 && str[i - 1] <= 13))
			{
				if (word_now == wanted_word)
				{
					while (!(str[i + word_length] == 32 || str[i + word_length] == '\0' || (str[i + word_length] >= 9 && str[i + word_length] <= 13)))
					{	
						word_length++;
					}
				}
				word_now++;
			}
		}
		i++;
	}
	return (word_length);
}

char	*assigning_values(char *new_string, char *str, int assigned_word)
{
	int	i;
	int	z;
	int	word_now;

	word_now = 0;
	i = 0;
	z = 0;
	while (str[i] != '\0' && assigned_word >= word_now)
	{
		if(!(str[i] == 32 || str[i] == '\0' || (str[i] >= 9 && str[i] <= 13)))
		{
			if (str[i - 1] == 32 || str[i - 1] == '\0' ||
			   (str[i - 1] >= 9 && str[i - 1] <= 13))
			{
				if (word_now == assigned_word)
				{
					while (!(str[i + z] == 32 || str[i + z] == '\0' || 
					      (str[i + z] >= 9 && str[i + z] <= 13)))
					{
						new_string[z] = str[i + z];
						z++;
					}
				}
				word_now++;
			}
		}
		i++;
	}
	new_string[z] = '\0';
	return (new_string);
	
}

char **ft_split(char *str)
{
	char **new_string = NULL;
	int	num_words;
	int	i;
	
	i = 0;
	num_words = count_words(str);
	new_string = (char **)malloc(num_words * sizeof(char *)); 
	while (i < num_words)
	{
		new_string[i] = (char *)malloc(word_length(str, i) * sizeof(char));
		new_string[i] = assigning_values(new_string[i], str, i);
		i++;
	}
	new_string[i] = NULL;
	return (new_string);
}

int	main(void)
{
	char	*str = "";
	char	**result = NULL;
	int	i;
	int	print_words;
	
	i = 0;
	print_words = count_words(str);
	result = ft_split(str);
	while (i <= print_words)
	{
		printf("A palavra da posicao %d eh: %s\n", i, result[i]);
		i++;
	}
	return (0);
}
