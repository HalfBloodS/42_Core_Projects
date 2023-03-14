/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:09:48 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:09:55 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
code implements the "ft_memchr" function which searches for the first
occurrence of a character "c" in a given memory area "str" of size "n".
The memory area "str" is casted to an "unsigned char *" and
stored in "conv_str". The function iterates through "n" bytes of the memory
area and compares each byte with the given character "c". If a match is found,
the function returns a pointer to the matched byte in "conv_str + i". If no
match is found, the function returns NULL.*/
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*conv_str;
	size_t			i;

	conv_str = (unsigned char *)str;
	i = 0;
	while (n-- > 0)
	{
		if (conv_str[i] == (unsigned char)c)
			return (conv_str + i);
		i++;
	}
	return (NULL);
}
