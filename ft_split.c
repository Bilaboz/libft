/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarles <rcarles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:32:37 by rcarles           #+#    #+#             */
/*   Updated: 2021/11/24 18:47:00 by rcarles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strs(const char *s, char c)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	if (s[i - 1] != c && s[i - 1])
		count++;
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
	int		strs_count;
	int		i;
	int		j;

	i = 0;
	j = 0;
	strs_count = count_strs(s, c);
	result = malloc(sizeof(*result) * (strs_count + 1));
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
	result[strs_count] = 0;
	return (result);
}
