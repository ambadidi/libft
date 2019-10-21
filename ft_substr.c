/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 21:51:18 by abadidi           #+#    #+#             */
/*   Updated: 2019/10/21 22:51:26 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	iter;

	if (!s)
		return (NULL);
	dest = NULL;
	if (start >= ft_strlen(s))
		len = 0;
	dest = malloc(1 + len * sizeof(char));
	if (!dest)
		return (NULL);
	iter = 0;
	while (iter < len && s[iter + start] != '\0')
	{
		dest[iter] = s[iter + start];
		iter++;
	}
	dest[iter] = '\0';
	return (dest);
}
