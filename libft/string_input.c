#include <libft.h>

int			string_input(char *str)
{
	while (*str)
	{
		if (*str == ' ' || *str == '\t')
			return (TRUE);
		str++;
	}
	return (FALSE);
}
