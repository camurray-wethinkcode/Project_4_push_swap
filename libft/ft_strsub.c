#include <libft.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	if (!s)
		return (NULL);
	if (!(result = ft_strnew(len)))
		return (NULL);
	result[len] = '\0';
	i = 0;
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	return (result);
}
