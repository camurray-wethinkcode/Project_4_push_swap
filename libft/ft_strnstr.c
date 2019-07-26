#include <libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	size_t	len;

	if (*needle == '\0')
		return ((char *)haystack);
	len = ft_strlen(needle);
	while (*haystack && size-- >= len)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
