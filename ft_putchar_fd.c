/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:36:04 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/15 17:36:36 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// This function writes a single character c to the file descriptor fd.
// It uses the write system call to output the character. The function
// takes two parameters: the character to be written and the file 
// descriptor, allowing for flexible output to different destinations 
// (like standard output, files, etc.).

#include <unistd.h>
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
