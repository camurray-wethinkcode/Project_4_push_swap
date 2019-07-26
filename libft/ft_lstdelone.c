#include <libft.h>

void	ft_lstdelone(t_list **link, void (*del)(void *, size_t))
{
	if (link)
	{
		del((*link)->content, (*link)->content_size);
		free(*link);
		*link = NULL;
	}
}
