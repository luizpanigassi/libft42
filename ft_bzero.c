/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:22:40 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/15 16:39:53 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//This function will substitute an n amount of bytes in a string/array to 0.
//So, if you have "HELLO" as a string, and run bzero with n = 2, you will get
//a return of "00LLO".
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (s == (void *)0 || n == 0)
		return ;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
