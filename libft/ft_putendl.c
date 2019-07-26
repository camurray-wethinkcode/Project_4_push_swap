#include <libft.h>

void	ft_putendl(char const *str)
{
	size_t	i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}
