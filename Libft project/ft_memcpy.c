/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:10:40 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:11:23 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
ft_memcpy copies n bytes from memory area src to memory area dest.
The memory areas should not overlap.
dest and src are cast to char* and then stored in conv_dest and
conv_src respectively.
A loop is used to copy each byte from src to dest by incrementing
i each iteration.
Finally, the destination pointer dest is returned.*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*conv_dest;
	const char	*conv_src;
	size_t		i;

	if (!src && !dest)
		return (NULL);
	conv_dest = (char *)dest;
	conv_src = (char *)src;
	i = 0;
	while (i < n)
	{
		*(conv_dest + i) = *(conv_src + i);
		i++;
	}
	return (dest);
}
