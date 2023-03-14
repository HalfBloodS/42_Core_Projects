/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:18:38 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:18:43 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
"ft_strlcpy" copy the string pointed to by "src" to the buffer pointed
to by "dest". The "size" argument is the maximum number of bytes to be copied.
The function returns the length of the "src" string. The code checks for null
pointers for "dest" and "src" and returns 0 if either is null. If "size" is 0,
it returns the length of "src" without copying any data. If "size" is greater
than 0, it copies the "src" string to "dest" up to a maximum of "size - 1"
bytes, appending a null terminator*/

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(src);
	i = 0;
	if (!dest || !src)
		return (0);
	if (size == 0)
		return (len_src);
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}
