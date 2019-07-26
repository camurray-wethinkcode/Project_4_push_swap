#include <libft.h>

void	ft_lstdel(t_list **link, void (*del)(void *, size_t))
{
	t_list	*next;

	while (*link)
	{
		next = (*link)->next;
		del((*link)->content, (*link)->content_size);
		free(*link);
		*link = next;
	}
	*link = NULL;
}
