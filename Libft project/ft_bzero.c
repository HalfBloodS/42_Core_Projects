/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:03:35 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:03:39 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
This code is an implementation of the bzero function,
 which sets the first "n" bytes of the memory pointed by "ptr" to zero.
 The implementation includes:
Converting the pointer type: "ptr" is cast to an unsigned char pointer 
"conv_ptr".
This allows the code to access and manipulate individual bytes of the
 memory.
Initializing the loop variable: "i" is initialized to 0 and is used as an 
index
 to traverse through the memory.
Zeroing out the memory: A while loop runs as long as "i" is less than "n".
In each iteration, the value of the memory at the current position 
(i.e. conv_ptr + i) is set to 0. "i" is incremented after each iteration.
The function does not return a value. The effect of the function can be 
seen by
observing the change in the memory pointed by "ptr".*/
#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	unsigned char	*conv_ptr;
	size_t			i;

	conv_ptr = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		*(conv_ptr + i) = 0;
		i++;
	}
}
