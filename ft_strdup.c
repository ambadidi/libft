/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 23:17:47 by abadidi           #+#    #+#             */
/*   Updated: 2019/10/14 22:06:47 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;
	size_t	j;
	char	*s;

	i = 0;
	j = 0;
	s = (char *)src;
	while (s[i] != '\0')
	{
		dest[j] = s[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strdup(const char *src)
{
	char *dest;
	char *s;

	dest = NULL;
	s = (char *)src;
	dest = (char *)malloc(sizeof(*dest) * (ft_strlen(src) + 1));
	if (dest != NULL)
		ft_strcpy(dest, src);
	return (dest);
}
