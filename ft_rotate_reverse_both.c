/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_reverse_both.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:38:19 by fakouyat          #+#    #+#             */
/*   Updated: 2022/06/27 11:38:19 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

void	ft_rotate_reverse_both(t_stack **tab_stack_a, t_stack **tab_stack_b)
{
	ft_rotate_reverse(tab_stack_a);
	ft_rotate_reverse(tab_stack_b);
}

void	rrr(t_stack **tab_stack_a, t_stack **tab_stack_b)
{
	ft_rotate_reverse_both(tab_stack_a, tab_stack_b);
	write(1, "rrr\n", 4);
}
