/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_position.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:12:21 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/06/12 20:12:22 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	get_position(t_node *stk)
{
	size_t	i;

	i = 0;
	if (stack_is_empty(stk))
		return ;
	while (stk)
	{
		stk->actual_pos = i;
		if (i <= stcklen(stk) / 2)
			stk->at_the_top = true;
		else
			stk->at_the_top = false;
		stk = stk->next;
		i++;
	}
}
