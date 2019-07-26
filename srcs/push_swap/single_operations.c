/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:17:32 by camurray          #+#    #+#             */
/*   Updated: 2019/07/24 18:17:35 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		swap(t_stackdata *stack)
{
	t_stack *temp;

	if (stack->lst && stack->lst->next)
	{
		temp = stack->lst;
		stack->lst = stack->lst->next;
		temp->next = stack->lst->next;
		stack->lst->next = temp;
	}
	return ;
}

void		push_to(t_stackdata *to, t_stackdata *from)
{
	t_stack *temp;

	temp = from->lst;
	if (from->lst)
		from->lst = from->lst->next;
	else
		return ;
	temp->next = to->lst;
	to->lst = temp;
}

void		rotate(t_stackdata *stack)
{
	t_stack *temp;
	t_stack *head;

	head = stack->lst;
	temp = stack->lst;
	if (stack->lst && stack->lst->next)
		stack->lst = stack->lst->next;
	else
		return ;
	if (temp->value > MIN_INT)
	{
		while (head->next)
			head = head->next;
		head->next = temp;
		temp->next = NULL;
	}
}

void		rrx(t_stackdata *stack)
{
	t_stack *head;
	t_stack *temp;

	if (stack->lst && stack->lst->next)
	{
		head = stack->lst;
		temp = stack->lst;
	}
	else
		return ;
	if (temp->value > MIN_INT)
	{
		while (head->next->next)
			head = head->next;
		stack->lst = head->next;
		stack->lst->next = temp;
		head->next = NULL;
	}
}
