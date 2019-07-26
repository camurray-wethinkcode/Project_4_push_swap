/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:12:56 by camurray          #+#    #+#             */
/*   Updated: 2019/07/25 17:30:38 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "checker.h"

void	check_dups(char **av)
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

int		main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;
	char	args;
	char	**s_argv;

	if (ac == 1)
		return (0);
	handle_arguments(&ac, &av, &args);
	check_dups(av);
	if (!(input_valid(ac, av)))
		ERROR;
	s_argv = atoi_split(av);
	check_dups(s_argv);
	(!string_input(av[0])) ? (INIT_STACKS_1) : (INIT_STACKS_2);
	(V_ENABLED) ? (VISUALIZE) : NULL;
	read_input(&a, &b, args);
	if (!sorted(a) || b)
		KO_FREE;
	free(s_argv);
	OK_FREE;
	return (0);
}
