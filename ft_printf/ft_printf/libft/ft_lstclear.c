/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalvemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 18:19:41 by asalvemi          #+#    #+#             */
/*   Updated: 2021/01/22 18:19:42 by asalvemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;
	t_list *temp2;

	temp2 = (*lst);
	while (temp2)
	{
		temp = temp2->next;
		del(temp2->content);
		free(temp2);
		temp2 = temp;
	}
	*lst = NULL;
}
