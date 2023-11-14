/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledamasc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:38:34 by ledamasc          #+#    #+#             */
/*   Updated: 2023/10/28 18:20:15 by ori              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	check_zero(int nb, int fd)
{
	if (nb == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int		divider;
	int		not_zero_first;
	char	digit;

	divider = 1000000000;
	not_zero_first = 0;
	check_zero(n, fd);
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	if (n < 0 && n != -2147483648)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	while (divider && n != -2147483648)
	{
		digit = '0' + n / divider;
		if (digit != '0')
			not_zero_first = 1;
		if (not_zero_first)
			ft_putchar_fd(digit, fd);
		n = n % divider;
		divider = divider / 10;
	}
}
