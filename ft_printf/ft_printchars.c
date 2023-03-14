/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchars.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:36:58 by jruzicka          #+#    #+#             */
/*   Updated: 2023/03/08 09:37:45 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	if (s == NULL)
	{
		cnt += ft_putstr("(null)");
		return (cnt);
	}
	while (s[i] != '\0')
	{
		cnt += ft_putchar(s[i]);
		i++;
	}
	return (cnt);
}
