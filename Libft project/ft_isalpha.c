/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:05:19 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:06:16 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	else if ((c >= 'a' && c <= 'z'))
		return (2);
	return (0);
}
/*if a given character is an alphabet (either uppercase or lowercase).
The implementation includes:

Checking for uppercase alphabet: The character is first compared to
the range 'A' to 'Z' using an if statement. If the character falls within
this range, the function returns 1, indicating that it is an uppercase alphabet.

Checking for lowercase alphabet: If the if statement evaluates to false, the
character is compared to the range 'a' to 'z' using an else if statement.
If the character falls within this range, the function returns 2, indicating
that it is a lowercase alphabet.

Return 0 if not alphabet: If neither of the if or else if statements
evaluate to true, the function returns 0, indicating that the character
is not an alphabet.*/
