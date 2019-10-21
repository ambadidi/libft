/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:39:39 by abadidi           #+#    #+#             */
/*   Updated: 2019/10/14 18:26:25 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*tmp;
	char	*d;
	char	*s;

	i = 0;
	tmp = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n && tmp == 0)
	{
		d[i] = s[i];
		if (s[i] == (char)c)
			tmp = d + i + 1;
		i++;
	}
	return (tmp);
}
