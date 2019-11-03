/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 22:29:38 by abadidi           #+#    #+#             */
/*   Updated: 2019/11/01 22:40:19 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(ft_strlen(s));
	if (!dest)
		return (dest);
	while (*s)
	{
		dest[i] = f(i, s[i]);
		i++;
		s++;
	}
	return (dest);
}
