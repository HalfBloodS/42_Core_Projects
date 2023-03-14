/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:53:50 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:53:54 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This code is an implementation of the calloc function,
which allocates memory for an array of "count" elements
of "size" bytes each and returns a pointer to the first byte
of the allocated memory. The implementation includes:

Allocating memory using malloc: A pointer "ptr" is assigned
the result of allocating "count * size" bytes of memory using
the malloc function.

Checking for a failed allocation: If the pointer "ptr" is equal
to NULL, it is returned immediately, indicating that the allocation failed.

Zeroing out the memory: The ft_bzero function is called to set
all the bytes of the memory pointed by "ptr" to 0.

Returning the pointer: The pointer "ptr" is returned, pointing
to the first byte of the allocated and zeroed out memory.*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}
