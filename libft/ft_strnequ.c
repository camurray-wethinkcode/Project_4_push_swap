#include <libft.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	if (!n)
		return (1);
	i = 0;
	if (s1 && s2 && n)
	{
		i = 0;
		while (n > 0)
		{
			if (s1[i] != s2[i])
				return (FALSE);
			i++;
			n--;
		}
		return (TRUE);
	}
	return (FALSE);
}
