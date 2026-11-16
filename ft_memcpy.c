/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saissani <saissani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:23:34 by saissani          #+#    #+#             */
/*   Updated: 2026/11/15 17:00:30 by saissani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	if (dest != NULL || src != NULL)
	{
		s = (unsigned char *)src;
		d = (unsigned char *)dest;
		while (n > 0)
		{
			*d = *s;
			s++;
			d++;
			n--;
		}
	}
	return (dest);
}
