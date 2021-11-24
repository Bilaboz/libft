/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarles <rcarles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:49:23 by rcarles           #+#    #+#             */
/*   Updated: 2021/11/24 15:24:19 by rcarles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_is_in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		start_idx;
	int		end_idx;
	char	*result;

	i = 0;
	while (char_is_in_set(s1[i], set))
		i++;
	start_idx = i;
	i = ft_strlen(s1) - 1;
	while (char_is_in_set(s1[i], set))
		i--;
	end_idx = i + 1;
	result = malloc(sizeof(*result) * (end_idx - start_idx + 1));
	ft_strlcpy(result, (char *) &s1[start_idx], end_idx - start_idx + 1);
	return (result);
}
