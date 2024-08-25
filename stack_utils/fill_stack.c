/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:12:06 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/06/12 20:12:08 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	make_list(t_node **a, int nbr)
{
	t_node	*new;
	t_node	*tail;

	new = new_node(nbr);
	if (!new)
	{
		free_stack(a);
		return ;
	}
	if (*a == NULL)
	{
		*a = new;
		return ;
	}
	tail = *a;
	while (tail->next)
		tail = tail->next;
	tail->next = new;
}

void	fill_stack(t_node **a, int argc, char **argv, int f)
{
	char	**args;
	size_t	i;

	i = 0;
	if (argc == 2 && ft_is_space(argv[1]))
	{
		args = ft_split(argv[1], ' ');
		if (!args)
			exit(EXIT_FAILURE);
		f = 1;
	}
	else
		args = argv + 1;
	while (args[i])
	{
		make_list(a, ft_atoi(args[i]));
		i++;
	}
	if (f == 1)
		free_array(args);
}
