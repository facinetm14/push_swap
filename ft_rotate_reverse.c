/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:32:29 by fakouyat          #+#    #+#             */
/*   Updated: 2022/06/26 20:32:29 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

void	ft_rotate_reverse(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*first;
	t_stack	*before_last;

	tmp = *stack;
	first = *stack;
	while (tmp)
	{
		if (tmp->next->next == NULL)
		{
			before_last = tmp;
			tmp = tmp->next;
			break ;
		}
		tmp = tmp->next;
	}
	*stack = tmp;
	(*stack)->next = first;
	before_last->next = NULL;
}

void	rr_a_b(t_stack **tab_stack, char *name)
{
	if (*tab_stack)
		write(1, name, 4);
	ft_rotate_reverse(tab_stack);
}
