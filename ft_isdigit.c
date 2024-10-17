/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:24:46 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/09 18:28:54 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This simple function is used to check if the characters in a string are numbers.
// We use a while loop to iterate through the string and check if the characters are numbers individually. 
//If there is a single character that is not a number, it returns 0, and stops the iteration.
int	ft_isdigit(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
