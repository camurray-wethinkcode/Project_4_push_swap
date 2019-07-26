#include <libft.h>

void	*ft_memcpy(void *dst, const void *src, size_t size)
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
		i++;
	}
	return (dst);
}
