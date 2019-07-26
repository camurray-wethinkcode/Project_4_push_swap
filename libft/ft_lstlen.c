#include <libft.h>

int	ft_lstlen(t_list *head)
{
	size_t	i;

	i = 0;
	while (head)
	{
		head = head->next;
		i++;
	}
	return (i);
}
