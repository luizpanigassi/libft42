/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:40:44 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/09 19:44:11 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This function compares two strings, s1 and s2, up to a specified number of characters. 
// It returns 0 if they are equal. If they differ, it returns a positive or negative value 
// indicating which string is greater based on the lexicographical order.
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
	{
		return (0);
	}
	while (n > 0 && *s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
