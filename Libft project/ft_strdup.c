/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:14:04 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:14:08 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Given a null-terminated string s, it creates a dynamically-allocated
copy of s and returns a pointer to it. The function starts by allocating
memory for the duplicate string using malloc, which is equal in size to
the length of s plus one (to account for the null terminator).
If the allocation fails, the function returns NULL. The function then
uses a loop to copy each character of s into the newly-allocated memory,
and adds a null terminator at the end. The pointer to the
duplicated string is then returned.*/

char	*ft_strdup(const char *s)
{
	unsigned int	i;
	char			*dup_s;

	dup_s = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (dup_s == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dup_s[i] = s[i];
		i++;
	}
	dup_s[i] = '\0';
	return (dup_s);
}
