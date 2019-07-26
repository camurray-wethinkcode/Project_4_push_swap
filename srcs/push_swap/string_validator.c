/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_validator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:17:49 by camurray          #+#    #+#             */
/*   Updated: 2019/07/24 18:17:54 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "push_swap.h"

int			string_input(char *str)
{
	while (*str)
	{
		if (*str == ' ' || *str == '\t')
			return (TRUE);
		str++;
	}
	return (FALSE);
}
