/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarles <rcarles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:42:17 by rcarles           #+#    #+#             */
/*   Updated: 2021/11/26 11:52:35 by rcarles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmenb, size_t size)
{
	char	*result;
	size_t	i;

	i = 0;
	if (!nmenb || !size)
	{
		result = malloc(sizeof(char) * 1);
		result[0] = '\0';
		return (result);
	}
	result = malloc(nmenb * size);
	if (!result)
		return (NULL);
	while (i < nmenb * size)
	{
		result[i] = 0;
		i++;
	}
	return ((void *) result);
}
