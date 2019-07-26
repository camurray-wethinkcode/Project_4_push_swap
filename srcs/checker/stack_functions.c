/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:14:48 by camurray          #+#    #+#             */
/*   Updated: 2019/07/24 18:14:52 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "checker.h"

int		stack_size(t_stack *stack)
{
	t_stack *tmp;
	size_t	i;

	if (!stack)
		return (0);
	tmp = stack;
	i = 0;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

t_stack	*push_in_list(t_stack *list, int num)
{
	t_stack	*tmp;

	if ((tmp = malloc(sizeof(t_stack))) == NULL)
		return (NULL);
	tmp->number = num;
	tmp->previous = NULL;
	tmp->next = list;
	return (tmp);
}

void	push(t_stack **head_ref, int new_data)
{
	t_stack	*new_node;

	new_node = (t_stack*)malloc(sizeof(t_stack));
	new_node->number = new_data;
	new_node->next = (*head_ref);
	new_node->previous = NULL;
	if (*head_ref)
		(*head_ref)->previous = new_node;
	(*head_ref) = new_node;
}

void	free_stack(t_stack *stack)
{
	if (stack->next)
		free_stack(stack->next);
	free(stack);
}

int		sorted(t_stack *a)
{
	int temp;

	if (!a)
		KO;
	while (a->next)
	{
		temp = a->number;
		if (a)
			a = a->next;
		if (a)
			if (temp > a->number)
				return (0);
	}
	return (1);
}
