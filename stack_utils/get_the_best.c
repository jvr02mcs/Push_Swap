/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_the_best.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:12:23 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/06/12 20:12:25 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*get_the_best(t_node *stk)
{
	if (!stk)
		return (NULL);
	while (stk)
	{
		if (stk->best)
			return (stk);
		stk = stk->next;
	}
	return (NULL);
}
