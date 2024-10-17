/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:59:08 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/09 19:48:03 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//This simple function replaces uppercase characters for their lowercase counterparts.
//We iterate through the string, checking if the character is lower/uppercase, and replace
//it accordingly, then return the string in the end.
char	*ft_tolower(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
		{
			*ptr = *ptr + ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}
