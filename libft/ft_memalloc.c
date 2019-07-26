#include <libft.h>

void	*ft_memalloc(size_t size)
{
	void *result;

	if (size <= 0)
		return (NULL);
	result = malloc(size);
	if (result == NULL)
		return (NULL);
	ft_memset(result, 0, size);
	return (result);
}
