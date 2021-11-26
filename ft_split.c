/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarles <rcarles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:32:37 by rcarles           #+#    #+#             */
/*   Updated: 2021/11/26 22:15:11 by rcarles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strs(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*get_str(const char *s, char c)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = 0;
	while (s[i] != c && s[i])
		i++;
	result = malloc(sizeof(*result) * (i + 1));
	if (!result)
		return (NULL);
	while (j < i)
	{
		result[j] = s[j];
		j++;
	}
	result[j] = '\0';
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	result = malloc(sizeof(*result) * (count_strs(s, c) + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			result[j] = get_str(&s[i], c);
			j++;
			while (s[i] && s[i] != c)
				i++;
			i--;
		}
		i++;
	}
	result[j] = 0;
	return (result);
}
