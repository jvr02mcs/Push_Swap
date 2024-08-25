/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_better.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:12:09 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/06/12 20:12:11 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	find_better(t_node *b)
{
	size_t	best_cost;
	t_node	*best_node;

	best_cost = LONG_MAX;
	while (b)
	{
		if (best_cost > b->cost)
		{
			best_cost = b->cost;
			best_node = b;
		}
		b = b->next;
	}
	best_node->best = true;
}
