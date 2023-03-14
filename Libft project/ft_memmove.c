/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:11:49 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:11:57 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
ft_memmove function is used to copy n bytes from memory area src to
memory area dest. The function handles overlap between the source and
destination regions by copying the data starting from the end of the
source memory area and going backward. If the src and dest pointers are
both NULL, the function returns NULL. If the src is greater than dest,
the function uses the ft_memcpy function to copy the data.
The function returns a pointer to the destination memory area.*/
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!src && !dest)
		return (NULL);
	if (src < dest)
	{
		while (n != 0)
		{
			n--;
			((char *)dest)[n] = ((char *)src)[n];
		}
	}
	else if (src > dest)
		ft_memcpy(dest, src, n);
	return (dest);
}
