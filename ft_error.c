/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:30:30 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/06/12 19:30:32 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error(char *str)
{
	char	*error;

	error = "\033[0;31mError\033[0m\n";
	if (str == NULL)
		return (write(2, error, ft_strlen(error)));
	else
		return (write(2, str, ft_strlen(str)));
}
