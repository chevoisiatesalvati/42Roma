/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalvemi <asalvemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:12:35 by asalvemi          #+#    #+#             */
/*   Updated: 2022/05/17 19:17:49 by asalvemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	t_rules	rules;
	int		ret;

	if (argc != 5 && argc != 6)
		return (write_error("Wrong amount of arguments"));
	ret = init_all(&rules, argv);
	if (ret != 0)
		return (error_manager(ret));
	if (launcher(&rules))
		return (write_error("There was an error creating the threads"));
	return (0);
}
