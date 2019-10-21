/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 19:07:29 by abadidi           #+#    #+#             */
/*   Updated: 2019/10/14 22:31:31 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	ldest;
	size_t	lsrc;
	int		i;

	if (size == 0)
		return (0);
	i = -1;
	ldest = ft_strlen(dest);
	lsrc = ft_strlen(src);
	if (ldest > size)
		lsrc = lsrc + size;
	else
		lsrc = lsrc + ldest;
	while (src[++i] && ldest < size - 1)
		dest[ldest++] = src[i];
	dest[ldest] = '\0';
	return (lsrc);
}
