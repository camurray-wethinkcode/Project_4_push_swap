/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   values.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:18:14 by camurray          #+#    #+#             */
/*   Updated: 2019/07/24 18:18:17 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				bottom_val(t_stackdata *stack)
{
	t_stack *head;

	head = stack->lst;
	while (head->next)
		head = head->next;
	return (head->value);
}

int				stack_size(t_stackdata *stack)
{
	t_stack *head;
	int		i;

	head = stack->lst;
	i = 0;
	while (head)
	{
		i++;
		head = head->next;
	}
	return (i);
}

int				lowest_val(t_stackdata *stack)
{
	t_stack	*head;
	int		smallest;

	head = stack->lst;
	smallest = head->value;
	while (head)
	{
		if (head->value < smallest)
			smallest = head->value;
		head = head->next;
	}
	return (smallest);
}

int				highest_val(t_stackdata *stack)
{
	t_stack	*head;
	int		biggest;

	head = stack->lst;
	biggest = head->value;
	while (head)
	{
		if (head->value > biggest)
			biggest = head->value;
		head = head->next;
	}
	return (biggest);
}

int				highest_under(t_stackdata *stack, int val)
{
	t_stack *head;
	int		biggest;

	head = stack->lst;
	biggest = 0;
	while (head)
	{
		if (head->value > biggest)
			if (head->value < val)
				biggest = head->value;
		head = head->next;
	}
	return (biggest);
}
