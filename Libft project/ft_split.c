/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:36:50 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:37:04 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
ft_split that takes in a string s and a character c, and returns a
null-terminated 2D array of strings that are substrings of s separated by c.
The code is using two helper functions ft_count_words and ft_allocate.

ft_count_words counts the number of words in the string s that are separated
by the character c. It increments a word count for every substring that begins
with a character other than c, and then continues to increment the pointer
until it finds a character that is c or the null-terminator.

ft_allocate is allocating memory for the 2D array of strings and populating
it with substrings of s separated by c. The function iterates over the input
string s, and whenever it encounters a substring that begins with a character
other than c, it uses the ft_substr function to create a new string that is a
copy of that substring, and stores its pointer in the current
position of the 2D array tab.

Finally, the ft_split function uses ft_count_words to allocate the necessary
memory for the 2D array, and then calls ft_allocate to populate the array with
substrings of s. The function returns the pointer to the newly
created 2D array*/

#include "libft.h"

static void	ft_allocate(char **tab, char const *s, char sep)
{
	char		**tab_p;
	char const	*tmp;

	tmp = s;
	tab_p = tab;
	while (*tmp)
	{
		while (*s == sep)
			++s;
		tmp = s;
		while (*tmp && *tmp != sep)
			++tmp;
		if (*tmp == sep || tmp > s)
		{
			*tab_p = ft_substr(s, 0, tmp - s);
			s = tmp;
			++tab_p;
		}
	}
	*tab_p = NULL;
}

static int	ft_count_words(char const *s, char sep)
{
	int	word_count;

	word_count = 0;
	while (*s)
	{
		while (*s == sep)
			++s;
		if (*s)
			++word_count;
		while (*s && *s != sep)
			++s;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	new = (char **)malloc(sizeof(char *) * (size + 1));
	if (!new)
		return (NULL);
	ft_allocate(new, s, c);
	return (new);
}
