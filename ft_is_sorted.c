/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 06:34:34 by fakouyat          #+#    #+#             */
/*   Updated: 2022/06/30 06:34:34 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

int	is_sorted(t_stack *tab_stack, int lenght)
{
	int	i;

	i = 0;
	while (i < lenght - 1)
	{
		if (tab_stack->data > (tab_stack->next)->data)
			return(0);
		tab_stack = tab_stack->next;
		i++;
	}
	return (1);
}
