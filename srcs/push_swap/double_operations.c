/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:16:20 by camurray          #+#    #+#             */
/*   Updated: 2019/07/24 18:16:24 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ss(t_stackdata *a, t_stackdata *b)
{
	swap(a);
	swap(b);
}

void		rr(t_stackdata *a, t_stackdata *b)
{
	rotate(a);
	rotate(b);
}

void		rrr(t_stackdata *a, t_stackdata *b)
{
	rrx(a);
	rrx(b);
}
