#include <libft.h>

static int		ft_substrlen(const char *str, int index, char delim)
{
	size_t	i;

	i = 0;
	while (str[index] && str[index] != delim)
	{
		index++;
		i++;
	}
	return (i);
}

static char		*ft_substrcpy(char const *str, int index, int delim)
{
	size_t	i;
	char	*result;

	i = 0;
	result = ft_strnew(ft_substrlen(str, index, delim) + 1);
	while (str[index] && str[index] != delim)
	{
		result[i] = str[index];
		index++;
		i++;
	}
	result[i + 1] = '\0';
	return (result);
}

static int		count_substrings(const char *str, char delim, int index)
{
	int		result;

	if (!(str[index]))
		return (0);
	result = 0;
	while (str[index] == delim)
		index++;
	while (str[index] && str[index] != delim)
	{
		index++;
		result = 1;
	}
	return (result + count_substrings(str, delim, index));
}

char			**ft_strsplit(char const *str, char delim)
{
	int		count;
	char	**result;
	int		i;
	int		j;

	if (!str || !delim)
		return (NULL);
	count = count_substrings(str, delim, 0);
	if (!(result = (char **)malloc(sizeof(char **) * count + 1)))
		return (NULL);
	result[count] = 0;
	i = 0;
	j = 0;
	while (i < count)
	{
		while (str[j] == delim && str[j])
			j++;
		result[i] = ft_substrcpy(str, j, delim);
		while (str[j] && str[j] != delim)
			j++;
		i++;
	}
	return (result);
}
