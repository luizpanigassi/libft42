/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:06:46 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/15 17:19:21 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This function applies a given function f to each character of the string s, 
// transforming it based on the index of the character. It allocates memory for 
// a new string to hold the transformed characters. The function iterates over 
// each character in s, applying f to each character along with its index, 
// and stores the result in the new string. After processing all characters, 
// it adds a null terminator and returns a pointer to the newly created string. 
// If the input string is NULL or memory allocation fails, it returns NULL.
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
