/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_full_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:12:26 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/06/12 20:12:29 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_full_stack(t_node *a, t_node *b)
{
	get_position(a);
	get_position(b);
	smallest_bigger(a, b);
	get_cost(a, b);
	find_better(b);
}
