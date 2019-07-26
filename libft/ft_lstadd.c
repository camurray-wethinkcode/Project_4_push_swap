#include <libft.h>

void	ft_lstadd(t_list **head, t_list *new)
{
	if (head && new)
	{
		new->next = *head;
		*head = new;
	}
}
