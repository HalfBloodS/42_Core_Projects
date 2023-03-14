/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:21:15 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:21:20 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
function takes a string s and an integer c as input and returns a pointer
to the last occurrence of the character c in the string s.
The function first increments the pointer to the end of the string and
if c is the null character, it returns the pointer to the end of the string.
If c is not the null character, it decrements the pointer to the last
character of the string and then iterates backwards through the string,
checking if the current character is equal to c. If a match is found,
the pointer is returned. If no match is found, the function returns NULL.*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	c = c & 255;
	i = 0;
	while (*s != '\0')
	{		
		i++;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	s--;
	i--;
	while (i > -1)
	{		
		if (*s == c)
			return ((char *)s);
		s--;
		i--;
	}
	return (NULL);
}
