/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:39:06 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:39:21 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
It returns a newly allocated string that contains a specified portion
of the input string s, starting from the index start and with a length of len.

The function checks if s is a valid string, and returns NULL if it's not.
It then checks if the start index is greater than the length of the string,
and returns an empty string in that case. It allocates memory for the
new string sub_str and copies the portion of s starting from start with
length len into sub_str. Finally, it appends the null character to the end
of sub_str and returns the new string.*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	size;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start >= size)
		return (ft_strdup(""));
	if (start + len > size)
		len = size - start;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
