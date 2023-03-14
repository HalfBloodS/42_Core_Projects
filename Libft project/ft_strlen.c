/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:49:02 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:19:34 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 "ft_strlen" calculates the length of the string pointed to by "str".
 The function uses a while loop to iterate through the "str" array until it
 reaches a null terminator. The counter "i" is incremented for each iteration,
 and its final value represents the length of the string. The function returns
 the length as a "size_t" value.*/
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
