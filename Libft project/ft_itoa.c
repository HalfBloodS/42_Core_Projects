/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:34:34 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:34:49 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
ft_digits: A static function that returns the number of digits of a
given integer.
It starts with "digits = 0" which stores the total number of digits.
If the input number is less than or equal to 0, "digits" is incremented.
The while loop runs until "n" becomes 0, dividing "n" by 10 each iteration.
The "digits" count is incremented in each iteration.
The function returns the total count of digits.*/
#include "libft.h"

static int	ft_digits(int n)
{
	int	digits;

	digits = 0;
	if (n <= 0)
		digits++;
	while (n != 0)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}
/*ft_itoa: A function that converts an integer to a string.
It calls the "ft_digits" function to get the number of digits
in the input number.
"signal" is set to 1 by default. If the input number is negative,
signal is set to -1.
Memory is allocated for the string "result" to store the final string.
The last character of the string is set to null terminator '\0'.
If the input number is negative, the first character of the string is
set to '-'.
If the input number is 0, the first character of the string is set to '0'.
The while loop runs until "n" becomes 0, appending the last digit to the
result string each iteration.
The final string is returned.*/

char	*ft_itoa(int n)
{
	size_t	digits;
	int		signal;
	char	*result;

	digits = ft_digits(n);
	signal = 1;
	result = malloc((digits + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[digits] = '\0';
	if (n < 0)
	{
		signal = -1;
		result[0] = '-';
	}
	else if (n == 0)
		result[0] = '0';
	while (n != 0)
	{
		digits--;
		result[digits] = (n % 10 * signal) + '0';
		n = n / 10;
	}
	return (result);
}
