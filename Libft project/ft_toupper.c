/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:22:24 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:23:34 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
ft_toupper takes in a single integer c representing an ASCII character,
and returns the corresponding uppercase character if the input is a
lowercase letter, or returns the original input c otherwise.
The function checks if the input c is a lowercase letter
between 'a' and 'z' inclusive, and returns c - 32 if so,
otherwise it returns c as is.*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
