/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:35:24 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:35:38 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
ft_putendl_fd writes a string s to the file descriptor fd, followed
by a newline character '\n'. If fd is less than 0, the function returns
without doing anything. It uses ft_putstr_fd to write the string s to fd,
and write to write the newline character.*/
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
