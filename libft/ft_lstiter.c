#include <libft.h>

void	ft_lstiter(t_list *link, void (*f)(t_list *elem))
{
	while (link)
	{
		f(link);
		link = link->next;
	}
}
