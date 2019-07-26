#include <libft.h>

void	ft_putendl_col_fd(char *colour, char *str, int fd)
{
	ft_putstr_fd(colour, fd);
	ft_putendl_fd(str, fd);
	ft_putstr_fd(RESET, fd);
}
