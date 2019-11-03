/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 23:11:07 by abadidi           #+#    #+#             */
/*   Updated: 2019/10/22 20:58:18 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	len;

	dest = NULL;
	len = 0;
	dest = malloc(1 + ft_strlen(s1) + ft_strlen(s2));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1, ft_strlen(s1) + 1);
	ft_strlcat(dest + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (dest);
}
