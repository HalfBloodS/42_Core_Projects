/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:18:11 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:18:16 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
This is a C function that concatenates two strings, src and dst.
The function takes three parameters: dst (pointer to the destination buffer),
src (pointer to the source string),
and dstsize (size of the destination buffer).
The function first uses ft_strlen to get the lengths of src and dst.

It then checks if dstsize is 0, in which case it returns the length of src.
If dstsize is less than the length of dst, it returns src_len + dstsize.
Otherwise, it uses a loop to copy characters from src to dst until either all
characters of src have been copied or the destination
buffer size has been reached.

If dst_len + j (j being the index in src) is equal to dstsize and
dst_len is less than dstsize, the function replaces the last character in dst
with a null terminator.Otherwise, it adds a null terminator at the end of dst.
The function returns the total length of both strings src and dst.*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	if (dstsize == 0)
		return (src_len);
	if (dstsize < dst_len)
		return (src_len + dstsize);
	else
	{
		while (src[j] && (dst_len + j) < dstsize)
			dst[i++] = src[j++];
		if ((dst_len + j) == dstsize && dst_len < dstsize)
			dst[--i] = '\0';
		else
			dst[i] = '\0';
		return (src_len + dst_len);
	}
}
