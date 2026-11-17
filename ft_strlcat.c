/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saissani <saissani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 18:09:42 by saissani          #+#    #+#             */
/*   Updated: 2026/11/17 01:25:30 by saissani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lensrc;
	size_t	lendst;
	size_t	i;
	size_t	j;

	lensrc = ft_strlen(src);
	lendst = 0;
	while (lendst < size && dst[lendst])
		lendst++;
	i = 0;
	j = lendst;
	if (!src || !dst)
		return (lensrc + size);
	if (lendst < size)
	{
		while (src[i] && j < (size - 1))
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
		return (lendst + lensrc);
	}
	return (size + lensrc);
}
