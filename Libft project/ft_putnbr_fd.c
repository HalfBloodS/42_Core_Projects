/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:35:58 by jruzicka          #+#    #+#             */
/*   Updated: 2023/01/20 16:36:09 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
ft_putnbr_fd takes an integer n and an integer file descriptor fd as input.
The function outputs the string representation of the number n to the file
specified by the file descriptor fd.

The function checks if the file descriptor fd is valid
(i.e. greater than or equal to 0), and if not, it returns immediately.
It also checks if n is greater than 2147483647, in which case it returns
immediately as well.

If n is equal to -2147483648, the function outputs the string "-2" to
the file and sets n to 147483648.

If n is negative, the function outputs a '-' character to the file,
and makes n positive by multiplying it by -1.

If n is less than 10, the function outputs the single digit
integer to the file.

If n is greater than or equal to 10, the function outputs the integer
as a sequence of characters by repeatedly dividing n by 10 and outputting
the last digit using the ft_putchar_fd function.*/
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n > 2147483647)
		return ;
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n < 10)
	{
		ft_putchar_fd((n + '0'), fd);
		return ;
	}
	ft_putnbr_fd((n / 10), fd);
	ft_putchar_fd((n % 10 + '0'), fd);
}
