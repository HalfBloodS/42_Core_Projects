/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:12:19 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:12:28 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
ft_memset sets the first n bytes of the memory area pointed to by ptr to the
value of x converted to an unsigned char. The ptr argument is a pointer to the
memory area that needs to be set. The x argument is the value that the memory
area should be set to. The n argument is the number of bytes that need to be
set to the value of x. This function returns a pointer to the memory area.*/
#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*conv_ptr;
	size_t			i;

	conv_ptr = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		*(conv_ptr + i) = x;
		i++;
	}
	return (ptr);
}
