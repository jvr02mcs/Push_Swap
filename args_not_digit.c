/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_not_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:30:16 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/06/12 19:30:19 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	args_not_digit(char *arg, size_t i)
{
	while (arg[i])
	{
		if (arg[i] == '+' || arg[i] == '-')
			i++;
		if (ft_isdigit(arg[i]))
			i++;
		else
			return (1);
	}
	return (0);
}
