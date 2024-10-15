/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:30:11 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/09 19:38:21 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strrchr(char *str, int c)
{
	char	ch;
	char	found;

	ch = (char)c;
	found = ((void *)0);
	while (*str)
	{
		if (*str == ch)
			found = str;
		str++;
	}
	if (ch == '\0')
		return ((char *)str);
	return ((char *)found);
}
