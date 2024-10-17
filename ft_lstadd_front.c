/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:56:43 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/17 15:05:28 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This function adds a new node at the front of the linked list. It uses the 
// t_list structure to represent the nodes. The function takes a pointer to 
// the head pointer (t_list **lst) so it can update the original head of the 
// list. The new node's next pointer is set to the current head, and then the 
// head pointer is updated to point to the new node, making it the first node 
// in the list.
#include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}
