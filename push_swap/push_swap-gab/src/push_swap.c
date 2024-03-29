/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalvemi <asalvemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 10:17:12 by ldalle-a          #+#    #+#             */
/*   Updated: 2022/04/13 16:30:24 by asalvemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc <= 1)
		return (1);
	if (argc == 2 && check_empty(argv[1]))
	{
		argc = ft_count_numbers_in_a_string(argv[1], ' ') + 1;
		argv = ft_split(argv[1], ' ');
		argv = ft_shift(argc, argv);
		i = 0;
	}
	if (check_arguments(argc, argv) == 1)
		return (1);
	inizialize_stack(argc, argv, 0);
	if (i == 0)
		free_argv(argc, argv);
	return (0);
}
