#include <libft.h>

char	*ft_strdup(const char *str)
{
	char	*result;
	size_t	i;

	i = 0;
	if (!(result = (char *)malloc(sizeof(char) * ft_strlen(str) + 1)))
		return (NULL);
	while (str[i])
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
