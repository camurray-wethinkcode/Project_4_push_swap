#include <libft.h>

int			ft_copyuntil(char **dst, char *src, char c)
{
	int		i;
	int		count;
	int		pos;

	i = 0;
	count = 0;
	while (src[i++])
		if (src[i] == c)
			break ;
	pos = i;
	if (!(*dst = ft_strnew(i + 1)))
		return (0);
	while (src[count] && count < i)
	{
		ft_memcpy(*dst, src, i);
		count++;
	}
	return (pos);
}
