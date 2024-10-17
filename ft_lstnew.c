/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:59:47 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/17 15:01:53 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//This function creates a new node of information with some content. The next node
//in line will be NULL, as any terminator node should be. Remember to use -> to set
//the 'next' node in line or the 'content' of the current node. The node was defined
//by typedef in the first part of the function.
#include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
