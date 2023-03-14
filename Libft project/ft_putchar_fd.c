/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:35:00 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:35:15 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
ft_putchar_fd is used to write a character c to a file specified
by the file descriptor fd. The function checks if the file descriptor
fd is valid (i.e. greater than or equal to 0), and if it is, it writes
the character c to the file using the write system call. If the file
descriptor is invalid, the function returns without doing anything.*/
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
