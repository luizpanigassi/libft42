/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:27:56 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/17 15:04:35 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This function removes leading and trailing characters from the string s1 
// that are present in the set of characters defined by 'set'. It first 
// determines the starting and ending indices of the trimmed string by 
// iterating through s1 from both ends until it finds characters not in 'set'. 
// If all characters are trimmed, it returns an empty string. After identifying 
// the valid range, it allocates memory for the new trimmed string, copies 
// the relevant portion of s1 into it, and adds a null terminator. If either 
// s1 or set is NULL, or if memory allocation fails, it returns NULL.
#include <stddef.h>

char	*ft_strtrim(char *s1, char *set)
{
	int		start;
	int		end;
	char	*str;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	str = malloc(end - start +2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start +2);
	return (str);
}
