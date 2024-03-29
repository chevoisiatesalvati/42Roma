/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalvemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 14:16:54 by asalvemi          #+#    #+#             */
/*   Updated: 2021/01/12 14:16:55 by asalvemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	d;
	unsigned int	j;
	unsigned int	s;

	d = 0;
	j = 0;
	s = 0;
	while (dest[d])
		d++;
	while (src[s])
		s++;
	if (size <= d)
		s += size;
	else
		s += d;
	while (src[j] && d + 1 < size)
		dest[d++] = src[j++];
	dest[d] = '\0';
	return (s);
}
