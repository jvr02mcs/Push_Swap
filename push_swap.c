/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:31:53 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/06/12 19:32:03 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_max(t_node *stk)
{
	t_node	*max;

	if (!stk)
		return (NULL);
	max = stk;
	while (stk)
	{
		if (stk->n > max->n)
			max = stk;
		stk = stk->next;
	}
	return (max);
}

int	min_pos(t_node *stk)
{
	t_node	*min;
	size_t	i;
	size_t	pos;

	i = 1;
	pos = i;
	if (!stk)
		return (-1);
	min = stk;
	while (stk != NULL)
	{
		if (stk->n < min->n)
		{
			min = stk;
			pos = i;
		}
		stk = stk->next;
		i++;
	}
	return (pos);
}

void	sort_three(t_node **a)
{
	t_node	*max;

	if (stack_is_ordered(*a) || stcklen(*a) > 3)
		return ;
	max = find_max(*a);
	if ((*a)->n == max->n)
		rotate(a, 'a');
	else if ((*a)->next->n == max->n)
		rev_rotate(a, 'a');
	if ((*a)->n > (*a)->next->n)
		swap(a, 'a');
}

void	sort_five(t_node **a, t_node **b)
{
	while (stcklen(*a) > 3 && !stack_is_ordered(*a))
	{
		get_position(*a);
		if (find_min(*a)->actual_pos == 1)
			swap(a, 'a');
		rotate_till_top(a, find_min(*a), 'a');
		push(a, b, 'b');
	}
	sort_three(a);
	while (*b)
		push(b, a, 'a');
}

void	push_swap(t_node **a, t_node **b)
{
	t_node	*min;

	if (stcklen(*a) == 2)
		swap(a, 'a');
	if (stcklen(*a) <= 5 && stcklen(*a) > 3)
		sort_five(a, b);
	if (!stack_is_ordered(*a))
	{
		while (stcklen(*a) > 3)
			push(a, b, 'b');
		sort_three(a);
		while (*b)
		{
			init_full_stack(*a, *b);
			put_b_in_a(a, b);
		}
		min = find_min(*a);
		while (*a != min)
		{
			if (min->at_the_top)
				rotate(a, 'a');
			else
				rev_rotate(a, 'a');
		}
	}
}
