/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:14:37 by camurray          #+#    #+#             */
/*   Updated: 2019/07/24 18:14:40 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <libft.h>

void	push_to(t_stack **to, t_stack **from)
{
	t_stack	*tmp;

	if (!*from)
		return ;
	tmp = *from;
	push(to, (*from)->number);
	if (stack_size(*from) == 1)
	{
		*from = NULL;
		return ;
	}
	if ((*from)->next)
		*from = (*from)->next;
	else
		*from = NULL;
	if (*from)
		(*from)->previous = NULL;
	free(tmp);
}

void	swap(t_stack **a)
{
	t_stack	*first;
	t_stack	*second;

	if (!*a)
		return ;
	if (stack_size(*a) < 2)
		return ;
	first = *a;
	second = (*a)->next;
	first->next = second->next;
	first->previous = second;
	second->previous = NULL;
	second->next = first;
	*a = second;
}

void	ss(t_stack **a, t_stack **b)
{
	swap(b);
	swap(a);
}
