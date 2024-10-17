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

#include <stddef.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

char	*ft_strchr(char *str, int c)
{
	char	ch;

	ch = (char)c;
	while (*str)
	{
		if (*str == ch)
			return ((char *)str);
		str++;
	}
	if (ch == '\0')
		return ((char *)str);
	return (((void *)0));
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	if (size == 0)
	{
		return (count);
	}
	while (src[i] != '\0' && i < (size -1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	size_t	str_length;
	size_t	i;

	i = 0;
	str_length = ft_strlen(src);
	copy = (char *)malloc(str_length + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	while (i < str_length)
	{
		copy[i] = src[i];
		i++;
	}
	copy[str_length] = '\0';
	return (copy);
}

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
