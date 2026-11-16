/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saissani <saissani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:34:57 by saissani          #+#    #+#             */
/*   Updated: 2026/11/15 17:11:34 by saissani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	temp1;
	char	*temp2;

	temp1 = (char)c;
	temp2 = (char *)s;
	while (n > 0)
	{
		*temp2 = temp1;
		temp2++;
		n--;
	}
	return (s);
}
