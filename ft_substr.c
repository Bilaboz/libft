/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarles <rcarles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:34:04 by rcarles           #+#    #+#             */
/*   Updated: 2021/11/26 20:21:27 by rcarles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*result;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		result = malloc(sizeof(*result) * 1);
		result[0] = '\0';
		return (result);
	}
	i = 0;
	size = ft_strlen(&s[start]);
	if (size > len)
		size = len;
	result = malloc(sizeof(*result) * (size + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, &s[start], size + 1);
	return (result);
}
