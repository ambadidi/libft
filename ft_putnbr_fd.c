/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 19:05:25 by abadidi           #+#    #+#             */
/*   Updated: 2019/11/03 19:39:28 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	my_nb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		my_nb = -n;
	}
	else
		my_nb = n;
	if (my_nb / 10)
		ft_putnbr_fd(my_nb / 10, fd);
	ft_putchar_fd(my_nb % 10 + '0', fd);
}
