/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saissani <saissani>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:18:43 by saissani          #+#    #+#             */
/*   Updated: 2026/10/15 16:20:03 by saissani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*first_node;

	first_node = malloc(sizeof(t_list));
	if (!first_node)
	{
		return (NULL);
	}
	first_node->content = content;
	first_node->next = NULL;
	return (first_node);
}
