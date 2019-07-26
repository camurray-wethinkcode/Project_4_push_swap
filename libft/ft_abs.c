#include <libft.h>

int	ft_abs(int n)
{
	if (n == -2147483648)
		return (2147483647);
	if (n < 0)
		return (-n);
	return (n);
}
