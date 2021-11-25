/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarles <rcarles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:34:04 by rcarles           #+#    #+#             */
/*   Updated: 2021/11/25 16:24:58 by rcarles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*result;

	i = 0;
	size = ft_strlen(&s[start]);
	result = malloc(sizeof(*result) * (size + 1));
	if (!result)
		return (NULL);
	if (start > ft_strlen(s))
	{
		result = malloc(sizeof(char) * 1);
		result[0] = '\0';
		return (result);
	}
	while (s[start + i] && i < len && i < size)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
