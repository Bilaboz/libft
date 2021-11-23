/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarles <rcarles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:18:45 by rcarles           #+#    #+#             */
/*   Updated: 2021/11/23 17:08:19 by rcarles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t size)
{
	char	*d;
	char	*s;
	size_t	i;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (d > s)
		while (size--)
			d[size] = s[size];
	else
	{
		while (i < size)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
