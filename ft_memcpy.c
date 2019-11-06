/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:55:03 by abadidi           #+#    #+#             */
/*   Updated: 2019/11/05 21:32:34 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*s;
	char		*d;
	size_t		i;

	if (dest == NULL && src == NULL)
		return (dest);
	if (dest == src)
		return (dest);
	if (!ft_memcmp(dest, src, n))
		return (dest);
	s = (char *)src;
	d = (char *)dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return ((void *)d);
}
