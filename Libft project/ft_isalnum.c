/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:04:21 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:04:25 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*
if a given character is an alphanumeric character
(i.e. either an alphabet or a digit). The implementation includes:

Checking if the character is an alphanumeric character: The character
is first passed to the ft_isalpha function to check if it is an alphabet.
If it is not an alphabet, it is passed to the ft_isdigit function to check
if it is a digit. If either of the checks return true, the if statement
evaluates to true and the function returns 1.

Return 0 if character is not alphanumeric: If the if statement evaluates
to false, the function returns 0, indicating that the character is not
an alphanumeric character.*/
