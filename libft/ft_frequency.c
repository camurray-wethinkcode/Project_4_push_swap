#include <libft.h>

int	ft_frequency(char *str, char c)
{
	size_t	i;
	size_t	count;

	if (!str)
		return (0);
	i = 0;
	count = 0;
	while (str[i++])
		if (str[i] == c)
			count++;
	return (count);
}
