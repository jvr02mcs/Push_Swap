/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   invalid_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrubio-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:30:37 by jrubio-m          #+#    #+#             */
/*   Updated: 2024/06/12 19:30:39 by jrubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	someone_is_dup(char **nbrs)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (nbrs[i])
	{
		j = 1;
		while (nbrs[i + j])
		{
			if (ft_atoi(nbrs[i]) == ft_atoi(nbrs[i + j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	some_arg_is_wrong(char	**args, size_t i)
{
	while (args[i])
	{
		if (ft_strncmp(args[i], "", 1) == 0)
			return (1);
		if (args_not_digit(args[i], 0) || is_not_int(args[i]))
			return (1);
		if (ft_is_space(args[i]))
			return (1);
		i++;
	}
	if (someone_is_dup(args))
		return (1);
	return (0);
}

int	invalid_args(int argc, char **argv)
{
	char	**aux;
	int		f;

	aux = NULL;
	f = 0;
	if (argc == 2 && ft_is_space(argv[1]))
	{
		aux = ft_split(argv[1], ' ');
		if (!aux)
			return (ft_error("Error in aux creation\n"));
		f = 1;
	}
	else
		aux = argv + 1;
	if (some_arg_is_wrong(aux, 0))
	{
		if (f == 1)
			free_array(aux);
		return (ft_error(NULL));
	}
	if (f == 1)
		free_array(aux);
	return (0);
}
