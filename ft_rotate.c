/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 17:46:30 by fakouyat          #+#    #+#             */
/*   Updated: 2022/06/26 17:46:30 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

void	ft_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*first;

	first = *stack;
	*stack = (*stack)->next;
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = first;
	tmp->next->next = NULL;
}

void	r_a_b(t_stack **tab_stack, char *name)
{
	if (*tab_stack)
		write(1, name, 3);
	ft_rotate(tab_stack);
}
