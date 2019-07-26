#include <libft.h>

void	ft_putchar_col_fd(char *colour, int c, int fd)
{
	ft_putstr_fd(colour, fd);
	ft_putchar_fd(c, fd);
	ft_putstr_fd(RESET, fd);
}
