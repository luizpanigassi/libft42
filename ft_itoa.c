/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:07:44 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/15 17:05:38 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This function converts an integer (n) into a null-terminated string representation.
// It handles negative numbers and the special case of zero. 
// The function first calculates the length of the string needed using ft_num_length. 
// It allocates memory for the string, including space for the null terminator. 
// If the input number is negative, it places a '-' at the start of the string.
// It fills the string with digits from the least significant to the most significant 
// and returns a pointer to the resulting string. If memory allocation fails, it returns NULL.
#include <stdlib.h>

int	ft_num_length(int num)
{
	int	length;

	length = 0;
	if (num <= 0)
		length = 1;
	while (num != 0)
	{
		num /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	int		length;
	char	*str;

	length = ft_num_length(n);
	str = (char *)malloc(length + 1);
	if (!str)
		return (NULL);
	str[length] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	else if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	while (n > 0)
	{
		str[--length] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
