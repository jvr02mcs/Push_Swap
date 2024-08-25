/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallest_bigger.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:16:51 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/06/12 20:16:53 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	smallest_bigger(t_node *a, t_node *b)
{
	t_node	*a_cpy;
	t_node	*aux;
	long	i;

	while (b)
	{
		i = LONG_MAX;
		a_cpy = a;
		while (a_cpy)
		{
			if (a_cpy->n > b->n && a_cpy->n < i)
			{
				i = a_cpy->n;
				aux = a_cpy;
			}
			a_cpy = a_cpy->next;
		}
		if (i == LONG_MAX)
			b->smllst_bggr = find_min(a);
		else
			b->smllst_bggr = aux;
		b = b->next;
	}
}
