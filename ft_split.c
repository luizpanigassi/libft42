/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:29:31 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/15 16:37:55 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This function splits the string s into words based on the delimiter character c.
// It counts the number of words in the string that are separated by the delimiter 
// and returns the total count. Words are defined as sequences of characters 
// that are not equal to c.
// Example: Splitting the string "Hello world" with the delimiter 'w'.
// The function will separate the string into two parts: 
// 1. "Hello " (everything before 'w')
// 2. "orld" (everything after 'w')
// The resulting array will be: 
// {
//     "Hello ", 
//     "orld", 
//     NULL  // Indicates the end of the array
// }
#include <stddef.h>

size_t	ft_countword(char *s, char c)
{
	size_t	count;

	count = 0;
	if (!s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	int		i;
	char	*start;

	if (!s)
		return (NULL);
	i = 0;
	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!lst)
		return (NULL);
	while (*s == c)
		s++;
	while (*s)
	{
		start = s;
		while (*s != c && *s)
			s++;
		if (s > start)
			lst[i++] = ft_substr(start, 0, s - start);
		while (*s == c)
			s++;
	}
	lst[i] = NULL;
	return (lst);
}
