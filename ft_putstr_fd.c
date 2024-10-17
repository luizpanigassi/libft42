/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:37:01 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/15 17:38:40 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This function writes a string s to the file descriptor fd.
// It uses the write system call to output the character. The function
// takes two parameters: the character to be written and the file 
// descriptor, allowing for flexible output to different destinations 
// (like standard output, files, etc.).
void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
