/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:07:43 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:07:48 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
This code is an implementation of the isdigit  which checks if a given
character is a digit. The implementation includes:

Checking if the character is a digit: The character is
compared to the range '0' to '9' using an if statement.
If the character falls within this range, the function returns 1,
indicating that it is a digit.

Return 0 if not digit: If the if statement evaluates to false,
the function returns 0, indicating that the character is not a digit.*/
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
