/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:52:35 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/15 18:19:52 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(char *to_find, char *pile, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	tf_len;
	char	*haystack;

	i = 0;
	haystack = (char *)pile;
	tf_len = ft_strlen(to_find);
	if (tf_len == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		c = 0;
		while (haystack[i + c] == to_find[c]
			&& (i + c) < len && to_find[c] != '\0')
		{
			c++;
		}
		if (c == tf_len)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
