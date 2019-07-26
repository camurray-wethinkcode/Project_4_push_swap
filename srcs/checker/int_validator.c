/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_validator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:14:11 by camurray          #+#    #+#             */
/*   Updated: 2019/07/24 18:14:14 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "checker.h"

int			int_input_check(int ac, char **av)
{
	int i;

	i = 0;
	while (i < ac)
	{
		if (!only_digits(av[i]))
			return (FALSE);
		if (!int_check(av[i]))
			return (FALSE);
		if (has_doubles(ac, av))
			return (FALSE);
		i++;
	}
	return (TRUE);
}

char		**atoi_split(char **av)
{
	int		i;
	char	**test;

	i = 0;
	test = ft_strsplit(*av, ' ');
	while (test[i])
		i++;
	int_input_check(i, av);
	return (test);
}

int			length_of(char **av)
{
	int i;

	i = 0;
	while (av[i])
		i++;
	return (i);
}
