/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:36:24 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:36:36 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 ft_putstr_fd writes a given string s to a file descriptor fd.
 It starts by checking if s is NULL or fd is less than 0,
 and returns immediately if either is true. Then, it loops through
 the string s and writes each character of the string to the file
 descriptor fd using the write function until a null character is reached.*/
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s || fd < 0)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
