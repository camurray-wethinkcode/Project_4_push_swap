#include <libft.h>

void	ft_bzero(void *str, size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		((char *)str)[i] = 0;
		i++;
	}
}
