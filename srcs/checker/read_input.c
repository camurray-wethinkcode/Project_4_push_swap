/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:14:20 by camurray          #+#    #+#             */
/*   Updated: 2019/07/25 17:28:01 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <libft.h>
#define IF {count++; free(line);}

void		read_input(t_stack **a, t_stack **b, char args)
{
	char	*line;
	int		count;

	count = 0;
	while (get_next_line(0, &line))
	{
		if (checkline(line))
		{
			do_op(line, a, b, args);
			IF;
		}
		else if (!checkline(line))
		{
			free(line);
			(*a) ? free_stack(*a) : NULL;
			(*b) ? free_stack(*b) : NULL;
			ERROR;
		}
		if (*a && sorted(*a) && !*b)
		{
			free_stack(*a);
			(O_ENABLED) ? (MOVES) : (NULL);
			OK;
		}
	}
}

void		handle_arguments(int *ac, char ***av, char *args)
{
	if (!*ac)
		ERROR;
	*av += 1;
	*ac -= 1;
	if (!*ac)
		ERROR;
	while (is_arg(*av, args))
	{
		*av += 1;
		*ac -= 1;
	}
	if (!ac)
	{
		ft_putendl_col_fd(RED, "Too few arguments", 1);
		exit(0);
	}
}
