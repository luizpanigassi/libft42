/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:02:23 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/17 15:03:36 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//This function returns the size of the node list, by iterating through the nodes
//and checking when the next one is NULL, which indicates the node list has ended.
//It then will increment the count and set the node as the next in line using lst->next,
//which will continue the iteration until NULL.
#include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
