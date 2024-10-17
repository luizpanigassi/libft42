/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:08:25 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/09 19:19:17 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//This function will return the first occurence of the character presented by c
//in the string str. We iterate through the string using a while loop until the
//terminator character, and return everything in the string AFTER the character c
//is found.
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
