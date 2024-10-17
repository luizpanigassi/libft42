/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:34:30 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/17 15:37:31 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This function iterates through each node in the linked list and applies 
// the provided function f to the content of each node. It takes a pointer 
// to the head of the list (lst) and a function pointer (f) that operates 
// on the node's content. If either the list or the function pointer is NULL, 
// the function does nothing.
#include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
