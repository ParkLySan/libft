/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:49:19 by litoulza          #+#    #+#             */
/*   Updated: 2017/11/27 15:49:25 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(intmax_t n, int fd)
{
	uintmax_t x;

	x = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		x = -n;
	}
	if (x >= 10)
	{
		ft_putnbr_fd(x / 10, fd);
		ft_putnbr_fd(x % 10, fd);
	}
	else
		ft_putchar_fd(x + '0', fd);
}
