/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 12:05:32 by mxaba             #+#    #+#             */
/*   Updated: 2018/07/23 12:05:41 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libprt.h"

void	ft_putnbr_fd(int fd, int n)
{
	if (n == -2147483648)
		ft_putstr_fd(fd, "-2147483648");
	else if (n < 0)
	{
		ft_putchar_fd(fd, '-');
		ft_putnbr_fd(fd, n * -1);
	}
	else if (n < 10)
		ft_putchar_fd(fd, n + '0');
	else
	{
		ft_putnbr_fd(fd, n / 10);
		ft_putchar_fd(fd, (n % 10) + '0');
	}
}
