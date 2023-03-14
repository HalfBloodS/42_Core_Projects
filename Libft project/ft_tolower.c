/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:22:00 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:22:04 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
function that converts an uppercase letter to its lowercase equivalent,
if it exists. The function takes an integer c as an argument and returns
an integer, which will be the original character c if it's not an uppercase
letter or its lowercase equivalent if it is. The function checks if the
character is an uppercase letter by comparing it to the ASCII codes
for 'A' and 'Z', and if it is, the function adds 32 to the character's
ASCII code to obtain the ASCII code for its lowercase equivalent.*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
