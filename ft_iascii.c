/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iascii.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:34:12 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/09 18:35:52 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This simple function is used to check if the characters in a string belong in the ASCII table.
// We use a while loop to iterate through the string and check the characters individually. 
//If there is a single character that does not belong in the ASCII table, it returns 0, and stops the iteration.
//To do so, we use the value of the character in the ASCII table to check it.
int	ft_isascii(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < 0 || *str > 127)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
