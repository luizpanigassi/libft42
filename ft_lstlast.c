#include <stdio.h>
#include <stdlib.h>

t_list *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return (NULL);
    while (ls->next != NULL)
        lst = lst->next;

    return (lst);
}