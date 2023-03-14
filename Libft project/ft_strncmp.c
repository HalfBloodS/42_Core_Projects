/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:20:05 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:20:11 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
"ft_strncmp" that compares at most the first "n" characters of two
strings "str1" and "str2". The function returns an integer less than,
equal to, or greater than zero if "str1" is found, respectively, to be
less than, to match, or be greater than "str2". The function starts by
setting a counter "i" to 0 and a variable "len" to "n". If "n" is 0, the
function immediately returns 0. The function then uses a while loop to
compare the characters in "str1" and "str2". The loop continues while the
characters match, "str1[i]" and "str2[i]" are not null terminators,
and "len - 1" is greater than 0. The function decrements "len" after each
iteration and increments "i". Finally, the function returns the difference
of the ASCII values of the characters in "str1[i]" and "str2[i]"
casted to "unsigned char".*/

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = n;
	if (n == 0)
		return (0);
	while ((str1[i] == str2[i]) && str1[i] && str2[i] && (len - 1) > 0)
	{
		i++;
		len--;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
