/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkisala <mkisala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:06:30 by mkisala           #+#    #+#             */
/*   Updated: 2025/10/21 19:06:35 by mkisala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*sc;

	sc = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (sc == NULL)
		return (NULL);
	ft_memcpy(sc, s, ft_strlen(s));
	return (sc);
}
