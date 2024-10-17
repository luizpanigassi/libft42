/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:29:42 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/09 18:32:29 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This simple function is used to check if the characters in a string are alphanumeric.
// We use a while loop to iterate through the string and check if the characters are alphanumeric individually. 
//If there is a single character that is not alphanumeric, it returns 0, and stops the iteration.
int	ft_isalnum(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z')
				|| (*str >= 'a' && *str <= 'z')
				|| (*str >= '0' && *str <= '9')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
