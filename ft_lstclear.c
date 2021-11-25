/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarles <rcarles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:40:15 by rcarles           #+#    #+#             */
/*   Updated: 2021/11/25 15:16:01 by rcarles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*temp_nxt;

	temp = *lst;
	while (temp)
	{
		temp_nxt = temp->next;
		(*del)(temp->content);
		free(temp);
		temp = temp_nxt;
	}
	*lst = NULL;
}
