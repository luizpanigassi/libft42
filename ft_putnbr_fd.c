/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:48:23 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/15 17:57:51 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This function outputs an integer n to the specified file descriptor fd.
// It handles the special case of the minimum integer value (-2147483648) 
// by directly printing its string representation. If n is negative, 
// it first outputs a '-' character and then converts n to a positive 
// value. The function recursively processes the number to extract and 
// print each digit, starting from the most significant digit. Finally, 
// it writes each digit to the specified file descriptor using ft_putchar_fd.
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n >= 9)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_putchar_fd((n % 10) + '0, fd');
	}
}
