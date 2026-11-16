#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *node;
    t_list *new;
    void *tmp;
    new = NULL;
    if( !lst || !f || !del)
        return (NULL);
    while(lst)
    {
        tmp = f(lst->content);
        node = ft_lstnew(tmp);
        if (!node)
        {
            del(tmp);
            ft_lstclear(&new, del);
            return (NULL);
        }
        ft_lstadd_back(&new, node);
        lst = lst->next;
    }
    return (new);
}