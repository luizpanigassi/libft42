/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:36:28 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/09 19:48:03 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This simple function is used to check if the characters in a string are printable.
// We use a while loop to iterate through the string and check if the characters are printable individually. 
//If there is a single character that is not printable, it returns 0, and stops the iteration.
int	ft_isprint(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
