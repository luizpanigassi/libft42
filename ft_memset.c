/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:44:31 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/10 15:49:00 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//This function will fill an n set of bytes with the int c. It will then return
//the string that contains the int c an n number of times. So, for example, if I
//run it (str, 'z', 4), it will four 'z', followed by the string with the first four
//characters substituted by 'z'.
void	ft_memset(void *str, int c, int n)
{
	unsigned char	*ptr;

	ptr = str;
	while (n-- > 0)
	{
		*ptr++ = (unsigned char)c;
	}
	return (str);
}
