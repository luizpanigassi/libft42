/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:57:42 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/09 18:58:37 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//This simple function replaces lowercase characters for their uppercase counterparts.
//We iterate through the string, checking if the character is lower/uppercase, and replace
//it accordingly, then return the string in the end.
char	*ft_toupper(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}
