/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saissani <saissani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:26:36 by saissani          #+#    #+#             */
/*   Updated: 2026/11/15 17:08:29 by saissani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (s > d)
		ft_memcpy(dest, src, n);
	if (d > s)
	{
		s += n - 1;
		d += n - 1;
		while (n > 0)
		{
			*d = *s;
			d--;
			s--;
			n--;
		}
	}
	return (dest);
}
