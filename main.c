/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:30:44 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/08/23 19:29:04 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//void	printstck(t_node *stk)
//{
//	t_node	*curr;

//	curr = stk;
//	while (curr)
//	{
//		ft_printf("[%d]", curr->n);
//		if (curr->next)
//			ft_printf("->");
//		else
//			ft_printf("\n");
//		curr = curr->next;
//	}
//}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	if (argc > 1)
	{
		if (invalid_args(argc, argv))
			return (1);
		fill_stack(&a, argc, argv, 0);
		if (stack_is_ordered(a))
		{
			free_stack(&a);
			return (0);
		}
		push_swap(&a, &b);
		free_stack(&a);
		free_stack(&b);
	}
	return (0);
}
