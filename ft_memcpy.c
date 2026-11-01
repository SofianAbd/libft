/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saissani <saissani>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:23:34 by saissani          #+#    #+#             */
/*   Updated: 2026/10/15 16:26:15 by saissani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n > 0)
	{
		*(char *)dest = *(char *)src;
		dest++;
		src++;
		n--;
	}
	return (dest);
}
