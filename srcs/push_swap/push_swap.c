/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:16:55 by camurray          #+#    #+#             */
/*   Updated: 2019/07/24 18:24:08 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		check_dups(char **av)
{
	int i;
	int j;

	i = 0;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_strequ(av[i], av[j]))
				ERROR;
			j++;
		}
		i++;
	}
}

int			check_largest(t_stackdata *stack)
{
	t_stack *head;
	t_stack *head2;

	head = stack->lst;
	head2 = stack->lst->next;
	while (head2)
	{
		if (head->value < head2->value)
			return (0);
		else
			head2 = head2->next;
	}
	return (1);
}

int			check_sorted(t_stackdata *a)
{
	t_stack *head;

	head = a->lst;
	while (head && head->next)
	{
		if ((head->value < head->next->value)
		&& (head->next->value - head->value == 1))
			head = head->next;
		else
			return (0);
	}
	return (1);
}

int			main(int ac, char **av)
{
	t_ps		ps;

	if (ac > 1)
	{
		if (!input_valid(ac - 1, av + 1))
			ERROR;
		init(&ps, av, ac);
		if (stack_size(&ps.a) < 50)
		{
			dtt(&ps);
			return_to_a(&ps);
		}
		else
		{
			partition(&ps);
			return_to_a(&ps);
		}
		freestack(&ps.a);
	}
	exit(0);
}
