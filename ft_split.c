/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 20:15:14 by abadidi           #+#    #+#             */
/*   Updated: 2019/10/30 22:01:17 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_char(char c1, char c)
{
	return (c1 == c);
}

int		count_words(char const *str, char c)
{
	int word;
	int nb_words;
	int i;

	word = 0;
	nb_words = 0;
	i = 0;
	while (str[i])
	{
		if (!is_char(str[i], c) && word == 0)
		{
			nb_words++;
			word = 1;
		}
		else if (is_char(str[i], c))
			word = 0;
		i++;
	}
	return (nb_words);
}

int		calculate_length(char const *str, char c)
{
	int i;

	i = 0;
	while (str[i] && !is_char(str[i], c))
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char const *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		word;
	int		i;
	int		length;
	int		size;

	res = (char **)malloc(count_words(s, c) * sizeof(char *) + 1);
	word = 0;
	size = 0;
	i = -1;
	while (s[++i] != '\0')
	{
		if (!is_char(s[i], c) && word == 0)
		{
			word = 1;
			length = calculate_length(&s[i], c);
			res[size] = (char *)malloc((length + 1) * sizeof(char));
			res[size] = ft_strncpy(res[size], &s[i], length);
			++size;
		}
		else if (is_char(s[i], c))
			word = 0;
	}
	res[size] = 0;
	return (res);
}
