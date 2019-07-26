/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visualizer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:15:29 by camurray          #+#    #+#             */
/*   Updated: 2019/07/24 18:15:46 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <libft.h>
#include <time.h>

static void		print_header(void)
{
	int i;

	ft_putchar_col_fd(GREEN, 0x250F, 1);
	i = -1;
	while (++i < 13)
		ft_putchar_col_fd(GREEN, 0x2501, 1);
	ft_putchar_col_fd(GREEN, 0x2533, 1);
	i = -1;
	while (++i < 13)
		ft_putchar_col_fd(GREEN, 0x2501, 1);
	ft_putchar_col_fd(GREEN, 0x2513, 1);
	ft_putendl("");
	DIVIDER;
	ft_putstr_col_fd(CYAN, "Stack A     ", 1);
	DIVIDER;
	ft_putstr_col_fd(CYAN, "Stack B     ", 1);
	DIVIDER;
	ft_putendl("");
}

static void		print_top(void)
{
	int		i;

	ft_putchar_col_fd(GREEN, 0x2523, 1);
	i = -1;
	while (++i < 13)
		ft_putchar_col_fd(GREEN, 0x2501, 1);
	ft_putchar_col_fd(GREEN, 0x254B, 1);
	i = -1;
	while (++i < 13)
		ft_putchar_col_fd(GREEN, 0x2501, 1);
	ft_putchar_col_fd(GREEN, 0x252B, 1);
	ft_putchar('\n');
}

static void		print_content(t_stack *a, t_stack *b)
{
	int		i;

	while (a || b)
	{
		DIVIDER;
		if (a)
			i = 13 - ft_intlen(a->number);
		else
			i = 13;
		(a) ? (ft_putnbr(a->number)) : NULL;
		while (--i)
			ft_putchar(' ');
		DIVIDER;
		if (b)
			i = 13 - ft_intlen(b->number);
		else
			i = 13;
		(b) ? (ft_putnbr(b->number)) : NULL;
		while (--i)
			ft_putchar(' ');
		DIVIDER;
		(a) ? (a = a->next) : NULL;
		(b) ? (b = b->next) : NULL;
		ft_putendl("");
	}
}

static void		print_bottom(void)
{
	int		i;

	ft_putchar_col_fd(GREEN, 0x2517, 1);
	i = -1;
	while (++i < 13)
		ft_putchar_col_fd(GREEN, 0x2501, 1);
	ft_putchar_col_fd(GREEN, 0x253B, 1);
	i = -1;
	while (++i < 13)
		ft_putchar_col_fd(GREEN, 0x2501, 1);
	ft_putchar_col_fd(GREEN, 0x251B, 1);
	ft_putchar('\n');
}

void			visualize(t_stack *a, t_stack *b)
{
	CLEAR;
	print_header();
	print_top();
	print_content(a, b);
	print_bottom();
	usleep(70000);
}
