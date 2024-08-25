/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:12:04 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/06/12 20:12:05 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_node **stk, int f)
{
	t_node	*aux;

	if ((*stk)->next)
	{
		aux = *stk;
		(*stk) = (*stk)->next;
		aux->next = (*stk)->next;
		(*stk)->next = aux;
	}
	if (f == 'a')
		ft_putendl_fd("sa", 1);
	else
		ft_putendl_fd("sb", 1);
}
