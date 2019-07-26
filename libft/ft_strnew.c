#include <libft.h>

char	*ft_strnew(size_t size)
{
	char	*result;

	if (!(result = (char *)malloc(size + 1)))
		return (NULL);
	ft_memset(result, (int)'\0', size + 1);
	return (result);
}
