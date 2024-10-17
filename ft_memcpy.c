/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:43:44 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/10 15:56:38 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//This function will copy a block of memory to a new block. It will simply
//get the original memory block, iterate through it and set each piece of the
//string/array as the value for the new memory block.
#include <stddef.h>

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest || !src)
	{
		return (NULL);
	}
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
