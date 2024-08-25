/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:12:15 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/06/12 20:12:16 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_node(t_node *node)
{
	if (node)
	{
		free(node);
	}
}

void	free_stack(t_node **head)
{
	t_node	*current;
	t_node	*next;

	if (!head || !*head)
		return ;
	current = *head;
	while (current)
	{
		next = current->next;
		free_node(current);
		current = next;
	}
	*head = NULL;
}
