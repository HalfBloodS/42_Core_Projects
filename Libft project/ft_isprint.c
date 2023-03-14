/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:08:17 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:08:21 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Checking if the character is printable: The character is compared
to the range 32 to 126 using an if statement. If the character falls
within this range, the function returns 1, indicating that it is printable.

Return 0 if not printable: If the if statement evaluates to false,
the function returns 0, indicating that the character is not printable.*/
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
