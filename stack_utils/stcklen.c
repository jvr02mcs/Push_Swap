/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stcklen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:17:00 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/06/12 20:17:02 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	stcklen(t_node *stk)
{
	size_t	len;
	t_node	*curr;

	len = 0;
	curr = stk;
	while (curr != NULL)
	{
		len++;
		curr = curr->next;
	}
	return (len);
}
