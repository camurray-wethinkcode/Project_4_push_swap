#include <libft.h>

int	ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\n')
		return (TRUE);
	if (c == '\f' || c == '\r')
		return (TRUE);
	return (FALSE);
}
