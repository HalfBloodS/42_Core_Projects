/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:20:36 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:20:40 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
"ft_strnstr" that searches for the first occurrence of the null-terminated
string "little" in the string "big", where not more than "len" characters
are searched. The function returns a pointer to the first character of the
located substring in "big", or NULL if the substring is not found.

The function starts by checking if either "little" or "big" is null,
or "len" is 0, and returns NULL if any of these conditions are true.
If "little" is an empty string, the function returns "big". The function then
sets a counter "i" to 0. The function uses a while loop to iterate
through "big", until a null terminator is found or "i" reaches "len".
The function sets another counter "j" to 0 for each iteration.
The function then uses a nested while loop to compare characters
in "big" and "little". The nested loop continues until a null terminator
is found in either "big" or "little", or "big[i + j]" is not equal
to "little[j]", or "i + j" is equal to or greater than "len".
If "little[j + 1]" is a null terminator, the function returns a pointer to
the first character of the located substring in "big". If the nested loop
completes, "i" is incremented, and the outer loop continues.
If the outer loop completes, the function returns NULL.*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if ((!little || !big) && len == 0)
		return (NULL);
	if (!*little)
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] != '\0' && little[j] != '\0'
			&& big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&(big[i]));
			j++;
		}
		i++;
	}
	return (NULL);
}
