/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:06:56 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/17 15:12:32 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This function adds a new node to the end of the linked list. 
// If the list is empty (i.e., *lst is NULL), it sets the head of 
// the list to the new node. If the list is not empty, it iterates 
// through the nodes until it finds the last node (where next is NULL) 
// and updates that node's next pointer to point to the new node, 
// effectively adding it to the end of the list.
#include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		last = *lst;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
}
