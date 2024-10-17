/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:40:29 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/09 19:48:03 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//This function is used to calculate the size of a string.
//We create a variable length, and iterate through the string until the terminator
//character, incrementing the variable length until we reach it.
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
