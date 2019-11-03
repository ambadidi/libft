/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 22:03:13 by abadidi           #+#    #+#             */
/*   Updated: 2019/11/01 22:29:46 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		int_length(int n)
{
	int		i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
	{
		i = 1;
		n = -n;
	}
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	int		len;
	int		sign;
	long	n;

	sign = 0;
	n = nbr;
	len = int_length(n);
	res = malloc(int_length(n) * sizeof(int) + 1);
	if (res == NULL)
		return (0);
	res[len + 1] = '\0';
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	while (len--)
	{
		res[len] = (n % 10) + '0';
		n /= 10;
	}
	if (sign)
		res[0] = '-';
	return (res);
}
