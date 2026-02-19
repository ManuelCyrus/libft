/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkisala <mkisala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:08:40 by mkisala           #+#    #+#             */
/*   Updated: 2025/10/21 19:08:42 by mkisala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	if (!s || !len || start > ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	ret = malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return (NULL);
	while (len)
	{
		ret[i++] = s[start++];
		len--;
	}
	ret[i] = 0;
	return (ret);
}
