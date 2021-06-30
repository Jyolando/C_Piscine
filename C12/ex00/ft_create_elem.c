/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 11:19:27 by jyolando          #+#    #+#             */
/*   Updated: 2021/06/24 17:41:17 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*array;

	array = malloc(sizeof(t_list));
	if (array == NULL)
		return (NULL);
	array->data = data;
	array->next = NULL;
	return (array);
}
