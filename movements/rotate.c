/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:11:57 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/06/12 20:12:00 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_node **stk, char f)
{
	t_node	*aux;

	if ((*stk)->next)
	{
		aux = *stk;
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = *stk;
		*stk = (*stk)->next;
		aux = aux->next;
		aux->next = NULL;
		if (f == 'a')
			ft_putendl_fd("ra", 1);
		else if (f == 'b')
			ft_putendl_fd("rb", 1);
	}
}
