/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:37:41 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:37:52 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
This is a function that joins two strings s1 and s2 to create a new string.
The function takes two const char * parameters, s1 and s2.
If either s1 or s2 is NULL, the function returns NULL.
The function uses ft_strlen to get the lengths of both input strings,
and then uses malloc to allocate memory for the new string final_str.
It then uses two loops to copy the characters of s1 and s2 into final_str.
Finally, it adds a null terminator to final_str and returns the pointer to it*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*final_str;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	final_str = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	i = 0;
	j = 0;
	if (final_str == NULL)
		return (NULL);
	while (j < len_s1)
		final_str[i++] = s1[j++];
	j = 0;
	while (j < len_s2)
		final_str[i++] = s2[j++];
	final_str[i] = '\0';
	return (final_str);
}
