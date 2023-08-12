/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:31:22 by jruzicka          #+#    #+#             */
/*   Updated: 2023/05/17 15:31:29 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*These functions provide implementations similar to their standard library
 counterparts and can be used for tasks such as memory allocation, 
 string search, string length calculation, string concatenation,
 and string duplication*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned int	i;
	void			*temp;
	size_t			test;
	int				c;

	c = 0;
	if (nmemb == 0 || size == 0)
	{
		temp = malloc(0);
		return (temp);
	}
	test = nmemb * size;
	if (test / nmemb != size)
		return (NULL);
	temp = malloc(size * nmemb);
	if (!temp)
		return (NULL);
	i = 0;
	while (i < (size * nmemb))
	{
		((unsigned char *)temp)[i] = (unsigned char)c;
		i++;
	}
	return (temp);
}
/*This function is an implementation of CALLOC, which allocates memory and 
initializes it to zero. It takes two parameters: nmemb (number of elements)
 and size (size of each element).
It first checks if either nmemb or size is zero. If so, 
it allocates zero bytes of memory and returns the result.
It then calculates test as the product of nmemb and size and checks
 if the result is valid. If the division of test by nmemb 
 is not equal to size, it indicates an overflow, 
 and the function returns NULL.
If the checks pass, it allocates memory of size * nmemb bytes and assigns
 it to temp.
Finally, it initializes each byte of the allocated memory to the value of c,
 which is 0, and returns the pointer to the allocated memory.*/

char	*ft_strchr(char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
/*This function is an implementation of strchr, which searches for the first
 occurrence of a character in a string. It takes two parameters: 
 s (the string to search) and c (the character to find).
It iterates over each character in s until it finds a match with c. 
If a match is found, it returns a pointer to the matched character. 
If no match is found, it returns NULL.*/

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (i);
	while (s[i])
		i++;
	return (i);
}
/*This function is an implementation of strlen, which calculates the 
length of a string.
It initializes a counter variable i to 0 and then iterates over each character
 in s until it reaches the null terminator ('\0'). For each character,
 it increments i.If s is NULL, it returns 0.Finally, it returns the value of i,
 which represents the length of the string.*/

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	char	*res;

	i = 0;
	res = (char *)ft_calloc(sizeof(char), (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		res[i] = *s2;
		i++;
		s2++;
	}
	res[i] = '\0';
	free (s1);
	return (res);
}
/*This function is an implementation of strjoin, which concatenates 
two strings s1 and s2.
It first allocates memory for the resulting string by calling ft_calloc with 
the size of s1, the size of s2, and one additional 
byte for the null terminator ('\0').
If the memory allocation fails, it returns NULL.
It then copies the characters from s1 to res until it reaches 
the null terminator of s1. Next, it copies the characters from s2 to res 
until it reaches the null terminator of s2.Finally, it adds the null terminator
 to res, frees the memory allocated for s1, and returns res.*/

char	*ft_strdup(char *s)
{
	size_t	i;
	size_t	len;
	char	*dest;

	len = ft_strlen(s);
	i = 0;
	dest = (char *)ft_calloc(sizeof(char), (len + 1));
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* This function is an implementation of strdup, which duplicates a string.
It first calculates the length of the string s using ft_strlen.
It then allocates memory for the duplicate string by calling ft_calloc with
 the size of len plus one additional byte for the null terminator ('\0').
If the memory allocation fails, it returns NULL.
It then copies the characters from s to dest until it reaches 
the null terminator of s.Finally, it adds the null terminator 
to dest and returns dest.*/
