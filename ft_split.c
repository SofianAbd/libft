/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saissani <saissani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 19:03:02 by saissani          #+#    #+#             */
/*   Updated: 2026/11/17 00:41:15 by saissani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	var_ini(unsigned int *i, unsigned int *mot)
{
	*i = 0;
	*mot = 0;
}

int	count_word(const char*s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

void	free_all(char **strs)
{
	int	n;

	n = 0;
	if (!strs)
		return ;
	while (strs[n])
	{
		free(strs[n]);
		n++;
	}
	free(strs);
}

char	**ft_split(const char *s, char c)
{
	unsigned int	i;
	char			**strs;
	unsigned int	debut;
	unsigned int	mot;

	var_ini(&mot, &i);
	if (!s || !*s || !count_word(s, c))
		return (ft_calloc(1, sizeof(char *)));
	strs = ft_calloc((count_word(s, c) + 1), sizeof(char *));
	if (!strs)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		debut = i;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i] != '\0')
			i++;
		strs[mot] = ft_substr(s, debut, i - debut);
		if (!strs[mot++])
			return (free_all(strs), NULL);
	}
	return (strs);
}
// int main()
// {
//     printf("%d",count_word("salut",' '));
// }