/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saissani <saissani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 18:20:15 by saissani          #+#    #+#             */
/*   Updated: 2026/11/17 01:15:36 by saissani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*tempb;
	char	*templ;
	size_t	templen;

	if (!(*little))
		return ((char *)big);
	while (len > 0 && *big)
	{
		tempb = (char *)big;
		templ = (char *)little;
		templen = len;
		while (templen > 0 && *tempb == *templ && *tempb && *templ)
		{
			tempb++;
			templ++;
			templen--;
		}
		if (*templ == '\0')
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
