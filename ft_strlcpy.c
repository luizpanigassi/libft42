/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:42:45 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/10 14:57:43 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This function safely copies a string from the source to the destination buffer.
// It checks the size of the original string and ensures that no more characters
// than the specified buffer size are copied. It returns the total length of the
// original string, allowing the program to handle cases where the input might
// be too long for the buffer, such as triggering an alert for the user.
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	if (size == 0)
	{
		return (count);
	}
	while (src[i] != '\0' && i < (size -1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}
