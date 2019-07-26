/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:16:04 by camurray          #+#    #+#             */
/*   Updated: 2019/07/24 18:16:10 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#define RULE(str) {rule(&ps->a, &ps->b, str);ft_putendl(str);continue;}
#define DRULE(str) {rule(&ps->a, &ps->b, str);ft_putendl(str);return(1);}

void		dtt(t_ps *ps)
{
	while (!(check_sorted(AS) == 1))
	{
		if ((AB) && (BN->value > B->value)
		&& (A->value > AN->value) && (A->value < ABV))
			RULE("ss");
		if ((AB) && (BN->value < B->value) &&
		(A->value < AN->value) && (AN->value > ABV) && (BBV > BN->value))
			RULE("ss");
		if ((AB) && (B->value < BBV) && (A->value > ABV))
			RULE("rr");
		if ((AA) && (A->value > AN->value) && (A->value < ABV))
			RULE("sa");
		if ((BB) && (BN->value > B->value))
			RULE("sb");
		if ((AA) && (AN->value > A->value) && (AN->value > ABV))
			RULE("sa");
		if ((BB) && (B->value < BBV))
			RULE("rb");
		if ((AA) && (A->value > ABV))
			RULE("ra");
		RULE("pb");
	}
}

void		rotateb(t_ps *ps, int pos, int halfstack)
{
	int i;

	i = 0;
	while (!i)
	{
		i++;
		if (pos > halfstack)
		{
			RULE("rrb");
		}
		else
			RULE("rb");
	}
}

void		secondhighest(t_ps *ps)
{
	int i;

	i = 0;
	while (i < 2)
	{
		while (i == 0 && B->value != NH(BS))
			rotateb(ps, BHP(NH(BS)), (stack_size(BS) / 2));
		if (i == 0 && B->value == NH(BS))
		{
			i++;
			RULE("pa");
		}
		while (i == 1 && B->value != HV(BS))
			rotateb(ps, BHP(HV(BS)), (stack_size(BS) / 2));
		if (i == 1 && B->value == HV(BS))
		{
			i++;
			RULE("pa");
		}
	}
	while (i == 2)
	{
		i++;
		RULE("sa");
	}
}

void		partition(t_ps *ps)
{
	int parts;
	int sect;
	int i;

	i = 0;
	sect = 1;
	parts = (stack_size(&ps->a) > 250 ? 10 : 5);
	while (sect <= parts)
	{
		while (i < (sect * ((stack_size(AS) + stack_size(BS)) / parts)))
		{
			if (A->value <= (sect * ((stack_size(AS) +
								stack_size(BS)) / parts)))
			{
				i++;
				RULE("pb");
			}
			else
				RULE("ra");
		}
		sect++;
	}
}
