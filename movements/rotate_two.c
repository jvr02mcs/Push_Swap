/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_two.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:12:01 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/06/12 20:12:02 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_node **a, t_node **b)
{
	rotate(a, 0);
	rotate(b, 0);
	ft_putendl_fd("rr", 1);
}
