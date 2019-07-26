/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:15:13 by camurray          #+#    #+#             */
/*   Updated: 2019/07/24 18:15:20 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "checker.h"

int			is_arg(char **str, char *args)
{
	if (ft_strequ(*str, "-v"))
	{
		if (*args & 1)
			ERROR;
		*args += 1;
		return (1);
	}
	if (ft_strequ(*str, "-c"))
	{
		if (*args & (1 << 1))
			ERROR;
		*args += 2;
		return (1);
	}
	if (ft_strequ(*str, "-o"))
	{
		if (*args & (1 << 2))
			ERROR;
		*args += 4;
		return (1);
	}
	return (0);
}

int			has_doubles(int ac, char **av)
{
	int	*arr;
	int	i;
	int j;

	i = 0;
	arr = (int *)malloc(sizeof(int) * ac - 1);
	while (++i < ac)
		arr[i] = ft_atoi(av[i]);
	i = 0;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	free(arr);
	return (0);
}

int			int_check(char *str)
{
	if (*str == '-')
	{
		if (ft_strlen(str) > 11 || ft_int_overflows(str))
			return (FALSE);
	}
	else if (ft_strlen(str) > 10 || ft_int_overflows(str))
		return (FALSE);
	return (TRUE);
}

int			only_digits(char *str)
{
	if (*str == '-')
		str++;
	while (*str && ft_isdigit(*str))
		str++;
	if (!*str)
		return (TRUE);
	return (FALSE);
}

int			input_valid(int ac, char **av)
{
	if (string_input(av[0]))
	{
		if (ac > 1)
			ERROR;
	}
	else if (!int_input_check(ac, av))
		ERROR;
	return (1);
}
