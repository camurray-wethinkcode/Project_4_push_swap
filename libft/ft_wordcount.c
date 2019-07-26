#include <libft.h>

int		ft_wordcount(char *str, char delim)
{
	int result;
	int i;

	i = 0;
	result = 0;
	while (str[i] && str[i] == delim)
		i++;
	while (str[i])
	{
		while (str[i] && str[i] != delim)
			i++;
		result++;
		while (str[i] == delim)
			i++;
	}
	return (result);
}
