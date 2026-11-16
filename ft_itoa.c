/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saissani <saissani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 16:46:00 by saissani          #+#    #+#             */
/*   Updated: 2026/11/15 16:49:07 by saissani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*res;

	count = count_digits(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	res = ft_calloc(count + 1, 1);
	if (n == 0)
		res[0] = '0';
	if (!res)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n)
	{
		res[count - 1] = n % 10 + '0';
		n = n / 10;
		count--;
	}
	return (res);
}
