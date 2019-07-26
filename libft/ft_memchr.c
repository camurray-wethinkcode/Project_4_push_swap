#include <libft.h>

void	*ft_memchr(const void *str, int c, size_t size)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	c2;

	if (size == 0)
		return (NULL);
	c2 = (unsigned char)c;
	i = 0;
	ptr = (unsigned char *)str;
	while (i < size)
	{
		if (ptr[i] == c2)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
