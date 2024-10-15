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
