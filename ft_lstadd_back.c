/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saissani <saissani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:12:52 by saissani          #+#    #+#             */
/*   Updated: 2026/11/15 16:50:20 by saissani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	node = ft_lstlast(*lst);
	if (!node)
	{
		*lst = new;
		return ;
	}
	node->next = new;
}

// int main(void)
// {
//     t_list *lst = NULL;
//     t_list *new;
//     t_list *current;

//     // Test 1 : ajout dans une liste vide
//     lst = ft_lstnew("Premier");

//     // Test 2 : ajout à la fin
//     new = ft_lstnew("Deuxieme");
//     ft_lstadd_back(&lst, new);

//     new = ft_lstnew("Troisieme");
//     ft_lstadd_back(&lst, new);

//     // Affichage de la liste
//     current = lst;
//     while (current)
//     {
//         printf("%s -> ", (char *)current->content);
//         current = current->next;
//     }
//     printf("NULL\n");

//     return (0);
// }