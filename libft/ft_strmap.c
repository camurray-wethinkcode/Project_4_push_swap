#include <libft.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*result;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	if (!(result = ft_strnew(i)))
		return (NULL);
	result[i] = '\0';
	i = 0;
	while (s[i])
	{
		result[i] = f(s[i]);
		i++;
	}
	return (result);
}
