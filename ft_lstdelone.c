/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:22:43 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/17 15:28:04 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This function deletes a specific node from the linked list. 
// It takes a pointer to the node (lst) and a function pointer (del) 
// used to free the memory of the node's content. If the node is 
// NULL or the delete function is NULL, the function does nothing. 
// It first calls the delete function on the node's content to free 
// that memory, then frees the memory allocated for the node itself.#include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
