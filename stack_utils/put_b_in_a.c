/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_b_in_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:12:33 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/06/12 20:12:40 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	place_each_node(t_node **a, t_node **b, t_node *best, int flag)
{
	while (*a != best->smllst_bggr && *b != best)
	{
		if (flag == 0)
			rr(a, b);
		else
			rrr(a, b);
	}
	get_position(*a);
	get_position(*b);
}

void	put_b_in_a(t_node **a, t_node **b)
{
	t_node	*best_node;

	best_node = get_the_best(*b);
	if (best_node->at_the_top && best_node->smllst_bggr->at_the_top)
		place_each_node(a, b, best_node, 0);
	else if (!best_node->at_the_top && !best_node->smllst_bggr->at_the_top)
		place_each_node(a, b, best_node, 1);
	rotate_till_top(b, best_node, 'b');
	rotate_till_top(a, best_node->smllst_bggr, 'a');
	push(b, a, 'a');
}
