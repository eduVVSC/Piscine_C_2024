/*
	Exercice 03 : ft_strjoin
	
	
	. Write a function that will concatenate all the strings pointed by strs separated by
	sep.
	. size is the number of strings in strs
	. if size is 0, you must return an empty string that you can free().
	. Here’s how it should be prototyped:
		int	strs_total_length(int size, char **strs, char *sep)
*/

#include <stdlib.h>

int	strs_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	u;
	int	total;

	u = 0;
	i = 0;
	total = 0;
	if (size == 0)
		return (1);
	while (u < size)
	{
		while (strs[u][i] != '\0')
			i++;
		total = total + i;
		i = 0;
		while (sep[i] != '\0')
			i++;
		total = total + i;
		i = 0;
		u++;
	}
	i = 0;
	while (sep[i] != '\0')
		i++;
	return (total - i);
}

char	*strs_conc_strs(int total_size, char *strs, char *carac)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (carac[i] != '\0')
		i++;
	while (strs[n] != '\0' && (i + n) < total_size)
	{
		carac[i + n] = strs[n];
		n++;
	}
	return (carac);
}

char	*strs_conc_sep(int total_size, char *sep, char *carac)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (carac[i] != '\0')
		i++;
	while (sep[n] != '\0' && (i + n) < total_size)
	{
		carac[i + n] = sep[n];
		n++;
	}
	return (carac);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*carac;
	int		i;
	int		tot_carac;

	i = 0;
	tot_carac = strs_total_length(size, strs, sep);
	carac = (char *)malloc((tot_carac) * sizeof(char));
	if (carac == NULL)
		return (NULL);
	while (i < size)
	{
		carac = strs_conc_strs(tot_carac, strs[i], carac);
		carac = strs_conc_sep(tot_carac, sep, carac);
		i++;
	}
	carac[tot_carac] = '\0';
	return (carac);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"primeira", "segunda", "terceira", 
	"quarto", "quinta", "sexto", "setimo", "oitavo", "nono"};
	char	*sep = " || ";
	char	*resultado;
	int		size = 1;

	resultado = ft_strjoin(size, strs, sep);
	printf("%s", resultado);
	free(resultado);
	return (0);
}*/
