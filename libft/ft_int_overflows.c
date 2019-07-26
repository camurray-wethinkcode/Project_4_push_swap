#include <libft.h>

int	ft_int_overflows(const char *str)
{
	long	res;
	int		neg;

	res = 0;
	neg = 1;
	while (ft_iswhitespace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	if (neg == 1)
		if (res > MAX_INT)
			return (1);
	if ((-res) < MIN_INT)
		return (1);
	return (0);
}
