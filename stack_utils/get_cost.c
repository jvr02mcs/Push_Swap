/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cost.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:12:18 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/06/12 20:12:20 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	get_cost(t_node *a, t_node *b)
{
	size_t	len_a;
	size_t	len_b;

	len_a = stcklen(a);
	len_b = stcklen(b);
	while (b)
	{
		b->cost = b->actual_pos;
		if (!b->at_the_top)
			b->cost = len_b - b->actual_pos;
		if (b->smllst_bggr->at_the_top)
			b->cost += b->smllst_bggr->actual_pos;
		else
			b->cost += len_a - b->smllst_bggr->actual_pos;
		b = b->next;
	}
}
