/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:32:06 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/06/12 19:32:14 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <errno.h>
# include <unistd.h>
# include <stddef.h>
# include <stdbool.h>
# include <string.h>
# include <sys/wait.h>
# include <limits.h>
# include <fcntl.h>
# include "libft/libft.h"
# define MAX 2147483647
# define MIN -2147483648

typedef struct s_node
{
	int				n;
	size_t			actual_pos;
	size_t			cost;
	bool			at_the_top;
	bool			best;
	struct s_node	*smllst_bggr;
	struct s_node	*next;
}	t_node;

//void	printstck(t_node *stk);

t_node	*new_node(int nbr);
int		ft_error(char *str);
size_t	stcklen(t_node *stk);
int		is_not_int(char *str);
int		ft_is_space(char *str);
t_node	*find_min(t_node *stk);
void	free_array(char **args);
long	ft_atol(const char *str);
void	swap(t_node **stk, int f);
void	get_position(t_node *stk);
void	free_stack(t_node **head);
t_node	*get_the_best(t_node *stk);
void	rr(t_node **a, t_node **b);
int		stack_is_empty(t_node *stk);
void	rrr(t_node **a, t_node **b);
void	rotate(t_node **stk, char f);
int		stack_is_ordered(t_node *stk);
void	get_cost(t_node *a, t_node *b);
void	rev_rotate(t_node **stk, char f);
void	find_better(t_node *b);
void	push_swap(t_node **a, t_node **b);
void	put_b_in_a(t_node **a, t_node **b);
int		args_not_digit(char *arg, size_t i);
int		invalid_args(int argc, char **argv);
void	init_full_stack(t_node *a, t_node *b);
void	smallest_bigger(t_node *a, t_node *b);
void	push(t_node **src, t_node **dst, int f);
void	fill_stack(t_node **a, int argc, char **argv, int f);
void	rotate_till_top(t_node **stk, t_node *top_node, int f);

#endif
