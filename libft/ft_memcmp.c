#include <libft.h>

int	ft_memcmp(const void *str1, const void *str2, size_t size)
{
	size_t	i;

	if (size == 0)
		return (0);
	i = 0;
	while (size--)
	{
		if (((unsigned char *)str1)[i] != ((unsigned char *)str2)[i])
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
		i++;
	}
	return (0);
}
