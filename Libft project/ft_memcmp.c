/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:10:16 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:10:19 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
ft_memcmp compares two memory areas str1 and str2 of n bytes each.
The unsigned char pointer variables conv_str1 and conv_str2 are used to store
the converted str1 and str2 respectively. The loop in the function continues
until either (1) all n bytes of the two memory areas are equal, or (2)
the current bytes being compared are not equal. In the latter case,
the difference between the two bytes is returned. If n is zero,
the function returns 0, indicating the two memory areas are equal.*/
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*conv_str1;
	const unsigned char	*conv_str2;
	size_t				i;

	conv_str1 = (unsigned char *)str1;
	conv_str2 = (unsigned char *)str2;
	i = 0;
	if (n == 0)
		return (0);
	while ((conv_str1[i] == conv_str2[i]) && i < (n - 1))
		i++;
	return (conv_str1[i] - conv_str2[i]);
}
