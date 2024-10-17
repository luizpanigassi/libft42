/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:43:44 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/14 15:39:21 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//This is one of the most annoying functions, in my opinion. It will convert a
//char into an int. It will iterate through the number using *10 to eliminate the
//last number, and subtract '0' to build the integer value. If there is an
//overflow (we can't use INT_MAX here), we return the maximum number available.
int	ft_atoi(char *str)
{
	int				sign;
	unsigned int	result;
	char			*ptr;

	sign = 1;
	result = 0;
	while (*str && (*str == ' ' || *str == '\t'))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	ptr = str;
	while (*ptr >= '0' && *ptr <= '9')
	{
		result = result * 10 + (*ptr++ - '0');
		if (result * sign > 2147483647)
			return (2147483647);
		if (result * sign < -2147483648)
			return (-2147483648);
	}
	return (sign * result);
}
