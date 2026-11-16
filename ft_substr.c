/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saissani <saissani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 18:24:25 by saissani          #+#    #+#             */
/*   Updated: 2026/11/16 20:39:00 by saissani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
	{
		sub = ft_calloc(1, 1);
		if (!sub)
			return (NULL);
		return (sub);
	}
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
	{
		len = ft_strlen(s) - start;
	}
	sub = ft_calloc(len + 1, 1);
	if (!sub)
		return (NULL);
	ft_memcpy(sub, &s[start], len);
	return (sub);
}
