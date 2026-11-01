/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saissani <saissani>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:26:36 by saissani          #+#    #+#             */
/*   Updated: 2026/10/15 16:33:52 by saissani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	temp[n];

	i = 0;
	while (i < n)
	{
		temp[i] = *(char *)src;
		dest++;
		src++;
	}
	i = 0;
	while (n > 0)
	{
		*(char *)dest = temp[i];
		dest++;
		i++;
	}
	return (dest);
}
