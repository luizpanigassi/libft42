/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:56:47 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/10 16:29:12 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//This function works almost like memcpy, it copies a block of memory to a new location.
//However, this function will check if the new block of memory overlaps by comparing
//d and s. If the location of d is higher than s, it means that d was allocated AFTER
//s in the memory, so it copies the data from end to start, to prevent overlap.
//If it's the other way around, it copies from start to end, since the destination was
//allocated before the source.
#include <stddef.h>

void	*ft_memmove(void *dest, void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)s;
	d = (char *)d;
	i = 0;
	if (d > s)
	{
		while (len-- > 0)
		d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
