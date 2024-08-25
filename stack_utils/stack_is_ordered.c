/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_is_ordered.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:16:58 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/06/12 20:16:59 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	stack_is_ordered(t_node *stk)
{
	t_node	*p;

	p = stk;
	if (!p)
		return (0);
	while (p->next)
	{
		if (p->n > p->next->n)
			return (0);
		p = p->next;
	}
	return (1);
}
