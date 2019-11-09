/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 21:08:18 by abadidi           #+#    #+#             */
/*   Updated: 2019/11/09 13:07:14 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		ltrim(char const *s1, char const *set)
{
	int i;
	int	count;

	i = 0;
	count = 0;
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
	{
		count++;
		i++;
	}
	return (count);
}

unsigned int		rtrim(char const *s1, char const *set)
{
	int i;

	i = ft_strlen(s1) - 1;
	while (i >= 0 && ft_strchr(set, s1[i]) != NULL)
		i--;
	return (i);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	left;
	size_t	right;
	size_t	a;

	dest = NULL;
	if (!s1)
		return (NULL);
	left = ltrim(s1, set);
	right = rtrim(s1, set);
	a = right - left + 1;
	if (left > right)
		return (ft_strdup(""));
	dest = malloc(a * sizeof(char) + 1);
	if (!dest)
		return (NULL);
	else
		dest = ft_substr(s1, left, a);
	return (dest);
}
