/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:11:50 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/06/12 20:11:52 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rev_rotate(t_node **stk, char f)
{
	t_node	*aux;

	if ((*stk)->next)
	{
		aux = *stk;
		while ((*stk)->next != NULL)
			(*stk) = (*stk)->next;
		(*stk)->next = aux;
		while (aux->next != *stk)
			aux = aux->next;
		aux->next = NULL;
		if (f == 'a')
			ft_putendl_fd("rra", 1);
		else if (f == 'b')
			ft_putendl_fd("rrb", 1);
	}
}
