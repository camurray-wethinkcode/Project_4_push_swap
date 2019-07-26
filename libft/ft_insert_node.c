#include <libft.h>

t_list	*ft_insert_node(t_list **head, t_list *node)
{
	if (head && node)
	{
		(*head)->next = node;
	}
	return (node);
}
