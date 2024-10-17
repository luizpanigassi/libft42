/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:00:43 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/15 18:19:09 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This function concatenates two strings, s1 and s2, and returns a new 
// dynamically allocated string containing the result. It first calculates 
// the lengths of s1 and s2, then allocates enough memory to hold both 
// strings plus a null terminator. The contents of s1 are copied into the 
// new string, followed by the contents of s2. Finally, it adds a null 
// terminator at the end of the new string and returns a pointer to it. 
// If memory allocation fails, it returns NULL.
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;
	char	*new_str;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	j = 0;
	new_str = (char *)malloc(len1 + len2 + 1);
	if (new_str == NULL)
		return (NULL);
	while (i < len1)
	{
		new_str[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		new_str[i + j] = s2[j];
		j++;
	}
	new_str[len1 + len2] = '\0';
	return (new_str);
}
