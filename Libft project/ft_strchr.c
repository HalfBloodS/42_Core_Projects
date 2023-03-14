/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:13:37 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:13:41 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** ft_strchr - finds the first occurrence of a character in a string
** @s: a pointer to the string to be searched
** @c: the character to be searched for
**
** Returns a pointer to the first occurrence of the character in the string,
or NULL if the character is not found.
	// Ensure that c is an 8-bit value
	// Loop through the string until a null character is encountered
	// Check if the current character in the string is equal to c
	// Return the current character if it is equal to c
	// Move to the next character in the string
	// Check if c is the null character
	// Return the null character if it is
	// Return NULL if the character is not found*/

char	*ft_strchr(const char *s, int c)
{
	c = c & 255;
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
