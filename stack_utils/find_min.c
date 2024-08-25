/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:12:12 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/06/12 20:12:14 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*find_min(t_node *stk)
{
	t_node	*min;

	if (!stk)
		return (NULL);
	min = stk;
	while (stk != NULL)
	{
		if (stk->n < min->n)
		{
			min = stk;
		}
		stk = stk->next;
	}
	return (min);
}
