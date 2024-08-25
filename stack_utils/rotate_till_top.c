/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_till_top.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:16:47 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/06/12 20:16:50 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_till_top(t_node **stk, t_node *top_node, int f)
{
	while (*stk != top_node)
	{
		if (top_node->at_the_top)
			rotate(stk, f);
		else
			rev_rotate(stk, f);
	}
}
