/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:29:08 by abadidi           #+#    #+#             */
/*   Updated: 2019/10/21 22:54:46 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*str;
	size_t	a;

	str = (char *)s;
	a = ft_strlen(str);
	i = a - 1;
	if (*str == '\0')
		return (NULL);
	while (i--)
	{
		if (str[i] == (char)c)
			return (str + i);
	}
	if ((char)c == '\0')
		return (str + a);
	return (NULL);
}
