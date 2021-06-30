/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:01:45 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/24 21:44:55 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"	

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*curr;

	curr = *begin_list;
	while (curr->next != (void *)0)
	{
		curr = curr->next;
	}
	curr->next = ft_create_elem(data);
}
