#include <libft.h>

void	ft_striter(char *s, void (*f)(char *))
{
	size_t i;

	if (f == NULL || !(s))
		return ;
	i = 0;
	while (s[i])
	{
		f(s + i);
		i++;
	}
}
