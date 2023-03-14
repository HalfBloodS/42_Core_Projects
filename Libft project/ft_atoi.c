/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:03:06 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:03:13 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			res;
	int			signal;
	int			i;

	res = 0;
	signal = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = ((res * 10) + (str[i] - '0'));
		i++;
	}
	return (res * signal);
}
/*
This code is an implementation of the atoi function, which converts a string 
representation of a number to an integer. The implementation includes:

variables: "res" to store the result, "signal" to keep track of the sign of the
 number, and "i" to keep track of the current position in the string.

Skipping whitespaces at the beginning of the string: This is done by 
incrementing the value of "i" while the current character is a whitespace.

Checking for a sign: If the current character is '-' or '+', the signal 
is set to -1 or 1 respectively and "i" is incremented.

Converting the string to integer: This is done by iterating through the 
string, multiplying the current result by 10, and adding the value of
 the current character minus '0' to the result.

Returning the result: The final result is returned after multiplying 
it by the signal, which takes care of the sign of the number.*/