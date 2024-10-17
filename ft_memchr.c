/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:46:23 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/10 17:55:36 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This function searches for the first occurrence of the character 'c' 
// in a block of memory pointed to by 'str', examining up to 'n' bytes. 
// If the character is found, it returns a pointer to the first occurrence; 
// if not, it returns NULL.
#include <stddef.h>

void	*ft_memchr(void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	ch;
	size_t			i;

	i = 0;
	s = (unsigned char *)str;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (s[i] == ch)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
