/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:23:52 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/09 18:34:02 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This simple function is used to check if the characters in a string are letters of the alphabet.
// We use a while loop to iterate through the string and check if the characters are letters individually. 
//If there is a single character that is not a letter, it returns 0, and stops the iteration.
int	ft_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
