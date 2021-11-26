/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarles <rcarles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:04:19 by rcarles           #+#    #+#             */
/*   Updated: 2021/11/26 12:00:10 by rcarles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	char	*p1;
	char	*p2;

	if (!dest && !src)
		return (NULL);
	p1 = (char *) dest;
	p2 = (char *) src;
	while (size--)
		p1[size] = p2[size];
	return (dest);
}
