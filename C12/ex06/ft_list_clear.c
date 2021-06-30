/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:44:29 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/24 19:20:46 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	while (begin_list != NULL)
	{
		if (begin_list->next != (void *)0)
			ft_list_clear(begin_list->next, free_fct);
		(*free_fct)(begin_list->data);
		free(begin_list);
	}
}
