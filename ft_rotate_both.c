/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_both.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:19:20 by fakouyat          #+#    #+#             */
/*   Updated: 2022/06/26 20:19:20 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

void	ft_rotate_both(t_stack **tab_stack_a, t_stack **tab_stack_b)
{
	ft_rotate(tab_stack_a);
	ft_rotate(tab_stack_b);
}

void	rr(t_stack **tab_stack_a, t_stack **tab_stack_b)
{
	ft_rotate_both(tab_stack_a, tab_stack_b);
	write(1, "rr\n", 3);
}
