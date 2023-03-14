/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:38:04 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:38:22 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
"ft_strmapi" that applies a function "f" to each character of a string "s"
and returns the result in a newly allocated string. The function first checks
if "s" or "f" are null pointers and returns null if either is null. It then
allocates memory for the new string using malloc with the length of "s" plus
one for the null terminator. If the allocation fails, it returns null.
The function then iterates through the "s" string and uses the "f" function
to transform each character and store it in the newly allocated string.
Finally, it adds a null terminator to the end of the new string and
returns a pointer to it.*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new_str;

	i = 0;
	if (!s || !f)
		return (NULL);
	new_str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
