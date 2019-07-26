#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*pdst;
	unsigned char	*psrc;

	if (dst == NULL && src == NULL && len != 0)
		return (NULL);
	i = 0;
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	if (psrc < pdst)
		while (len-- > 0)
			pdst[len] = psrc[len];
	else
		while (i < len)
		{
			pdst[i] = psrc[i];
			i++;
		}
	return (pdst);
}
