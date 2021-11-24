/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarles <rcarles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:49:11 by rcarles           #+#    #+#             */
/*   Updated: 2021/11/24 17:36:02 by rcarles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int nb)
{
	int			digit_nb;
	long int	n;

	n = nb;
	digit_nb = 1;
	if (n < 0)
	{
		digit_nb++;
		n *= -1;
	}
	while (n > 9)
	{
		n /= 10;
		digit_nb++;
	}
	return (digit_nb);
}

char	*ft_itoa(int nb)
{
	char		*result;
	int			i;
	int			digit_nb;
	long int	n;

	n = nb;
	digit_nb = count_digits(n);
	result = malloc(sizeof(*result) * (digit_nb + 1));
	if (!result)
		return (NULL);
	if (n < 0)
		n *= -1;
	i = digit_nb;
	while (i--)
	{
		result[i] = n % 10 + '0';
		n /= 10;
	}
	result[digit_nb] = '\0';
	if (result[0] == '0' && result[1])
		result[0] = '-';
	return (result);
}
