#include <libft.h>

char	*ft_strncpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (src[i] && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
