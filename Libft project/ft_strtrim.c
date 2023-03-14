/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:38:39 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:38:53 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The function takes two strings s1 and set as input and returns
a newly allocated string that contains the characters from s1 with
the leading and trailing characters specified in set removed.

The in_str function is a helper function that takes a string set
and a character c and returns 1 if c is in set, and 0 otherwise.

The ft_strtrim function first checks if the input string s1 is an
empty string or consists only of characters in set and returns an
empty string in those cases. Then it iterates through s1 from the
beginning and removes leading characters that are in set by finding
the first character that is not in set. Similarly, it iterates from
the end of s1 and removes trailing characters that are in set.

The final step is to return a substring of s1 that starts from the
first non-removed character to the last non-removed character,
which is achieved by calling the ft_substr function.
*/

static int	in_str(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		left;
	int		right;
	char	*str;

	if (ft_strncmp(s1, "", 1) == 0)
	{
		str = ft_calloc(1, 1);
		return (str);
	}
	i = 0;
	while (in_str(set, s1[i]) == 1 && s1[i] != '\0')
		i++;
	if (s1[i] == '\0')
	{
		str = ft_calloc(1, 1);
		return (str);
	}
	left = i;
	right = ft_strlen(s1) - 1;
	while (in_str(set, s1[right]) == 1 && right > left)
		right--;
	str = ft_substr(s1, left, right - left + 1);
	return (str);
}
