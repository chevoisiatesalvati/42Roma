/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalvemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 14:17:17 by asalvemi          #+#    #+#             */
/*   Updated: 2021/01/12 14:17:18 by asalvemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	if (!src[0])
		return ((char*)dest);
	i = 0;
	while (dest[i] && i < len)
	{
		j = 0;
		while (dest[i + j] &&
			src[j] &&
			(i + j) < len &&
			dest[i + j] == src[j])
			j++;
		if (!src[j])
			return ((char*)(dest + i));
		i++;
	}
	return (NULL);
}
