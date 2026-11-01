/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saissani <saissani>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:46:49 by saissani          #+#    #+#             */
/*   Updated: 2026/10/27 18:14:27 by saissani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

void ft_bzero(void *s, size_t n);
int    ft_isalnum(int c);
int    ft_isalpha(int c);
int    ft_isascii(int c);
int    ft_isdigit(int c);
int    ft_isprint(int c);
void ft_lstadd_back(t_list **lst, t_list *new_node);
void ft_lstadd_front(t_list **lst, t_list *new_node);
void ft_lstdelone(t_list *lst, void (*del)(void*));
t_list *ft_lstlast(t_list *lst);
t_list  *ft_lstnew(void *content);
unsigned int ft_lstsize(t_list *lst);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memset(void *s, int c, size_t n);
char **ft_split(const char *s, char c);
int ft_toupper(int c);

#endif