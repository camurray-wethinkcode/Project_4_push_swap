#include <libft.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t size)
{
	size_t			i;
	unsigned char	*pdst;
	unsigned char	*psrc;

	if (dst == NULL && src == NULL && size != 0)
		return (NULL);
	i = 0;
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	while (i < size)
	{
		pdst[i] = psrc[i];
		if (psrc[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
