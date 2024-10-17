/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:29:55 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/17 15:33:49 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This function deletes all nodes in the linked list starting from the head node.
// It takes a pointer to the head pointer (lst) and a function pointer (del) 
// used to free the memory of each node's content. The function iterates through 
// the list, calling the delete function on each node's content and freeing 
// the node itself. After all nodes are deleted, it sets the head pointer 
// to NULL to indicate that the list is empty.
#include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (lst == NULL || del == NULL)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	lst = NULL;
}
