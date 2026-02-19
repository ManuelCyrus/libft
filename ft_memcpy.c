/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkisala <mkisala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:04:53 by mkisala           #+#    #+#             */
/*   Updated: 2025/10/23 21:03:35 by mkisala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*td;
	unsigned char	*ts;

	if (!n || dest == src)
		return (dest);
	td = dest;
	ts = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		td[i] = ts[i];
		i++;
	}
	return (dest);
}
