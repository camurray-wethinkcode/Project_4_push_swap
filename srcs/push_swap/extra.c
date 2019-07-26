/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:16:34 by camurray          #+#    #+#             */
/*   Updated: 2019/07/24 18:16:37 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a_end(t_ps *ps)
{
	while (ABV != HV(&ps->a))
	{
		if (find_pos(&ps->a, highest_val(&ps->a)) < (stack_size(&ps->a) / 2))
		{
			EXEC("ra");
		}
		else
		{
			EXEC("rra");
		}
	}
}

void	pushreturn_to_a(t_ps *ps)
{
	while (B)
	{
		if (HV(&ps->a) < HV(&ps->b))
			EXEC("rb");
		if (A->value < HV(&ps->b))
			EXEC("ra");
		if (check_largest(&ps->b) && B->value > LV(AS))
			EXEC("pa");
		if (!B || ((ABV > HV(&ps->b)) && (ABV < A->value)))
			EXEC("rra");
		if (HV(&ps->b) != B->value)
		{
			if (find_pos(&ps->b, HV(&ps->b)) < (stack_size(&ps->a) / 2))
			{
				while (HV(&ps->b) != B->value)
					EXEC("rb");
			}
			else
				while (HV(&ps->b) != B->value)
					EXEC("rrb");
		}
		EXEC("pa");
	}
	rotate_a_end(ps);
}

void	return_to_a(t_ps *ps)
{
	while (B)
	{
		if ((BB) && moves(BS, HV(BS)) < moves(BS, NH(BS)))
		{
			while (B->value != HV(BS))
			{
				rotateb(ps, BHP(HV(BS)), (stack_size(BS) / 2));
			}
			EXEC("pa");
		}
		else
		{
			if (stack_size(BS) > 2)
				secondhighest(ps);
			else if (B->value != HV(BS))
			{
				EXEC("sb");
			}
			else
				EXEC("pa");
		}
	}
}

void	rotate_b(t_ps *ps, int i)
{
	int	a;

	if ((A && BB) && A->value < HV(&ps->b) && A->value > LV(&ps->b))
	{
		a = highest_under(&ps->b, A->value);
		if (find_pos(&ps->b, a) < stack_size(&ps->b) / 2)
		{
			while (highest_under(&ps->b, A->value) != B->value)
			{
				++i;
				EXEC("rb");
			}
		}
		else
		{
			while (highest_under(&ps->b, A->value) != B->value)
			{
				++i;
				EXEC("rrb");
			}
		}
	}
}
