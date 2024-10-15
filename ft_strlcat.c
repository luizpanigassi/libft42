/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:43:58 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/15 18:19:21 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*dest_ptr;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_ptr = dest;
	dest_len = 0;
	src_len = ft_strlen(src);
	if (dest == (void *)0 || src == (void *)0)
		return (size);
	while (*dest_ptr != '\0' && dest_len < size)
	{
		dest_ptr++;
		dest_len++;
	}
	if (dest_len == size)
		return (size + src_len);
	while (*src != '\0' && (dest_len + 1) < size)
	{
		*dest_ptr++ = *src++;
		dest_len++;
	}
	*dest_ptr = '\0';
	return (dest_len + src_len);
}
